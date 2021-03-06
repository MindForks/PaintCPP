#include "FigureEllipse.h"


namespace GraphicsCpp {

	FigureEllipse::FigureEllipse()
	{
		UpdateCollisionShape();
	}

	void FigureEllipse::UpdateCollisionShape()
	{
		float c_x = this->Left + this->Width / 2;
		float c_y = this->Top + this->Height / 2;
		float r_y = this->Height / 2;
		float r_x = this->Width / 2;
		this->collisionShape = gcnew array<PointF>(20);
		for (int i = 0; i < 20; i++) {
			this->collisionShape[i] = PointF(c_x + r_x * Math::Cos(6.28f * ((float)i / 20.0f)), c_y + r_y * Math::Sin(6.28f * ((float)i / 20.0f)));
		}
	}

	bool FigureEllipse::CheckPoint(PointF^ point) {
		return
			((point->X - (this->Left + this->Width / 2)) * (point->X - (this->Left + this->Width / 2))) / ((this->Width / 2) * (this->Width / 2)) +
			((point->Y - (this->Top + this->Height / 2)) *(point->Y - (this->Top + this->Height / 2))) / ((this->Height / 2) * (this->Height / 2)) <= 1;
	}

	void FigureEllipse::Draw(Graphics^ g) {
		g->FillEllipse(this->brush, this->Left, this->Top, this->width, this->height);
		g->DrawEllipse(this->pen, this->Left, this->Top, this->width, this->height);
	}

	Figure ^ FigureEllipse::Copy()
	{
		FigureEllipse^ figure = gcnew FigureEllipse();
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
