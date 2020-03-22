#include "Figure.h"

namespace CourseWork {

	void Figure::UpdateCollisionShape()
	{
		throw gcnew System::NotImplementedException();
	}

	Figure::Figure()
	{
		this->pen = gcnew Pen(this->strokeColor, this->strokeWidth);
		this->brush = gcnew SolidBrush(this->color);
		this->selectionPen = gcnew Pen(System::Drawing::Color::Cyan, 2);
		this->selectionPen->DashCap = System::Drawing::Drawing2D::DashCap::Round;
	}

	Figure::Figure(System::Drawing::Color color, System::Drawing::Color strokeColor)
	{
		this->color = color;
		this->strokeColor = strokeColor;
		this->pen = gcnew Pen(this->strokeColor, this->strokeWidth);
		this->brush = gcnew SolidBrush(this->color);
		this->selectionPen = gcnew Pen(System::Drawing::Color::Cyan, 2);
		this->selectionPen->DashCap = System::Drawing::Drawing2D::DashCap::Round;
	}

	Figure::Figure(Snapshot ^ snap)
	{
		this->color = snap->color;
		this->strokeColor = snap->strokeColor;
		this->strokeWidth = snap->strokeWidth;
		this->position = snap->position;
		this->height = snap->height;
		this->width = snap->width;
		this->pen = snap->pen;
		this->brush = snap->brush;

		this->selectionPen = gcnew Pen(System::Drawing::Color::Cyan, 2);
		this->selectionPen->DashCap = System::Drawing::Drawing2D::DashCap::Round;
	}


	Figure::~Figure()
	{
	}

	Snapshot^ Figure::CreateSnapshot()
	{
		return gcnew Snapshot(color, strokeColor, strokeWidth, position, width, height, pen, brush);
	}

	bool Figure::CheckBorder(Size size) {
		return
			this->Left < 0 ||
			this->Right > size.Width ||
			this->Top < 0 ||
			this->Bottom > size.Height;
	}

	bool Figure::CheckPoint(PointF^ point) {
		throw gcnew System::NotImplementedException();
	}

	bool Figure::CheckColision(Figure^ figure) {
		for each(PointF point in this->collisionShape) {
			if (figure->CheckPoint(point)) {
				return true;
			}
		}
		for each(PointF point in figure->collisionShape) {
			if (this->CheckPoint(point)) {
				return true;
			}
		}
		return false;
	}

	void Figure::Draw(Graphics^ g) {
		throw gcnew System::NotImplementedException();
	}

	void Figure::DrawWithSelection(Graphics^ g)
	{
		this->Draw(g);
		g->DrawRectangle(this->selectionPen, this->Left, this->Top, this->width, this->height);

		g->DrawRectangle(this->selectionPen, this->Left - 2.0f, this->Top - 2.0f, 4.0f, 4.0f);
		g->DrawRectangle(this->selectionPen, this->Right - 2.0f, this->Top - 2.0f, 4.0f, 4.0f);
		g->DrawRectangle(this->selectionPen, this->Right - 2.0f, this->Bottom - 2.0f, 4.0f, 4.0f);
		g->DrawRectangle(this->selectionPen, this->Left - 2.0f, this->Bottom - 2.0f, 4.0f, 4.0f);
	}

	void Figure::StartDrag(PointF^ point)
	{
		this->dragPosition = gcnew PointF(point->X - this->Position->X, point->Y - this->Position->Y);
	}

	void Figure::Drag(PointF^ point)
	{
		this->Position = gcnew PointF(point->X - this->dragPosition->X, point->Y - this->dragPosition->Y);
	}

	void Figure::FitRectangle(PointF ^ point1, PointF ^ point2)
	{
		if (point1->X < point2->X) {
			this->Position->X = point1->X;
			this->Width = point2->X - point1->X;
		} else {
			this->Position->X = point2->X;
			this->Width = point1->X - point2->X;
		}
		if (point1->Y < point2->Y) {
			this->Position->Y = point1->Y;
			this->Height = point2->Y - point1->Y;
		}
		else {
			this->Position->Y = point2->Y;
			this->Height = point1->Y - point2->Y;
		}
	}

	void Figure::Diformate()
	{
		if (this->Height > 2) {
			this->Position = gcnew PointF((float)this->Position->X - 0.25f, this->Position->Y);
			this->Width += 0.5f;

			this->Position = gcnew PointF(this->Position->X, (float)this->Position->Y + 0.25f);
			this->Height -= 0.5f;
		}
	}

	void Figure::Animate(Size size)
	{
		if (!this->CheckBorder(size)) {
			float x, y, o_x, o_y;
			x = (float)size.Width / 2.0f;
			y = (float)size.Height / 2.0f;
			o_x = this->Left + this->Width / 2.0f;
			o_y = this->Top + this->Height / 2.0f;
			this->Position = PointF(this->Position->X + (o_x - x) * 0.1f, this->Position->Y + (o_y - y) * 0.1f);
		}
	}

	Figure^ Figure::Copy() {
		return nullptr;
	}

}