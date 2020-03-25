#include "RectangleShape.h"

namespace GraphicsCpp {

	RectangleShape::RectangleShape()
	{
		UpdateCollisionShape();
	}


	void RectangleShape::UpdateCollisionShape()
	{
		this->collisionShape = gcnew array<PointF>{
			PointF(this->Left, this->Top),
			PointF(this->Right, this->Top),
			PointF(this->Right, this->Bottom),
			PointF(this->Left, this->Bottom)
		};
	}

	bool RectangleShape::CheckPoint(PointF^ point) {
		return
			this->Left < point->X &&
			this->Right > point->X &&
			this->Top < point->Y &&
			this->Bottom > point->Y;
	}

	void RectangleShape::Draw(Graphics^ g) {
		g->FillRectangle(this->brush, this->Left, this->Top, this->Width, this->Height);
		g->DrawRectangle(this->pen, this->Left, this->Top, this->Width, this->Height);
	}

	Figure ^ RectangleShape::Copy()
	{
		RectangleShape^ figure = gcnew RectangleShape();
		figure->Color = this->Color;
		figure->Width = this->Width;
		figure->Height = this->Height;
		figure->Position = this->Position;
		figure->StrokeColor = this->StrokeColor;
		figure->StrokeWidth = this->StrokeWidth;
		figure->IsSelected = false;
		return (Figure^)figure;
	}
	
}