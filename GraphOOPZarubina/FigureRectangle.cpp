#include "FigureRectangle.h"

namespace GraphicsCpp {

	FigureRectangle::FigureRectangle()
	{
		UpdateCollisionShape();
	}


	void FigureRectangle::UpdateCollisionShape()
	{
		this->collisionShape = gcnew array<PointF>{
			PointF(this->Left, this->Top),
			PointF(this->Right, this->Top),
			PointF(this->Right, this->Bottom),
			PointF(this->Left, this->Bottom)
		};
	}

	bool FigureRectangle::CheckPoint(PointF^ point) {
		return
			this->Left < point->X &&
			this->Right > point->X &&
			this->Top < point->Y &&
			this->Bottom > point->Y;
	}

	void FigureRectangle::Draw(Graphics^ g) {
		g->FillRectangle(this->brush, this->Left, this->Top, this->Width, this->Height);
		g->DrawRectangle(this->pen, this->Left, this->Top, this->Width, this->Height);
	}

	Figure ^ FigureRectangle::Copy()
	{
		FigureRectangle^ figure = gcnew FigureRectangle();
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