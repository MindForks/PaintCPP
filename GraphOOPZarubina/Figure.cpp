#include "Figure.h"

namespace GraphicsCpp {

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

	Snapshot^ Figure::CreateSnapshot(String^ snapshotName)
	{
		return gcnew Snapshot(color, strokeColor, strokeWidth, position, width, height, pen, brush);
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

	Figure^ Figure::Copy() {
		return nullptr;
	}

}