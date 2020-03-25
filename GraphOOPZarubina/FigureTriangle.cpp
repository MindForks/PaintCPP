#include "FigureTriangle.h"

namespace GraphicsCpp {

	FigureTriangle::FigureTriangle()
	{
		UpdateCollisionShape();
	}

	void FigureTriangle::UpdateCollisionShape()
	{
		this->collisionShape = gcnew array<PointF>{
			PointF(this->Left, this->Bottom),
			PointF(this->Left + this->Width / 2, this->Top),
			PointF(this->Right, this->Bottom),
			PointF(this->Left, this->Bottom)
		};
	}


	float sign(PointF^ p1, PointF^ p2, PointF^ p3)
	{
		return (p1->X - p3->X) * (p2->Y - p3->Y) - (p2->X - p3->X) * (p1->Y - p3->Y);
	}

	bool FigureTriangle::CheckPoint(PointF^ point) {
		bool b1, b2, b3;

		b1 = sign(point, this->collisionShape[0], this->collisionShape[1]) < 0.0f;
		b2 = sign(point, this->collisionShape[1], this->collisionShape[2]) < 0.0f;
		b3 = sign(point, this->collisionShape[2], this->collisionShape[0]) < 0.0f;

		return ((b1 == b2) && (b2 == b3));
	}

	void FigureTriangle::Draw(Graphics^ g) {
		g->FillPolygon(this->brush, this->collisionShape);
		g->DrawPolygon(this->pen, this->collisionShape);
	}

	Figure ^ FigureTriangle::Copy()
	{
		FigureTriangle^ figure = gcnew FigureTriangle();
		figure->Color = this->Color;
		figure->Width = this->Width;
		figure->Height = this->Height;
		figure->Position = this->Position;
		figure->BorderColor = this->BorderColor;
		figure->BorderWidth = this->BorderWidth;
		figure->IsSelected = false;
		return (Figure^)figure;
	}
}