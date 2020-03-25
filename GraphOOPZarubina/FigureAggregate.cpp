#include "FigureAggregate.h"

namespace GraphicsCpp {

	FigureAggregate::FigureAggregate()
	{
		this->figures = gcnew List<Figure^>();
		this->height = 1;
		this->width = 1;
		this->collisionShape = gcnew array<PointF>{
			PointF(this->Left, this->Top),
			PointF(this->Right, this->Top),
			PointF(this->Right, this->Bottom),
			PointF(this->Left, this->Bottom)
		};
	}

	bool FigureAggregate::CheckPoint(PointF ^ point)
	{
		for each(Figure^ figure in this->figures) {
			if (figure->CheckPoint(point)) {
				return true;
			}
		}
		return false;
	}

	bool FigureAggregate::CheckColision(Figure^ figure) {
		for each(Figure^ fig in this->figures) {
			if (figure->CheckColision(fig)) {
				return true;
			}
		}
		return false;
	}

	void FigureAggregate::Draw(Graphics ^ g)
	{
		for each(Figure^ figure in this->figures) {
			figure->Draw(g);
		}
	}

	void FigureAggregate::DrawWithSelection(Graphics^ g) {
		for each(Figure^ figure in this->figures) {
			figure->DrawWithSelection(g);
		}
		g->DrawRectangle(this->selectionPen, this->Left, this->Top, this->width, this->height);
	}

	void FigureAggregate::UpdateCollisionShape()
	{
		for each(Figure^ figure in this->figures) {
			figure->UpdateCollisionShape();
		}
	}

	void FigureAggregate::UpdateSize()
	{
		this->width = this->Width;
		this->height = this->Height;
	}

	Figure ^ FigureAggregate::Copy()
	{
		FigureAggregate^ figure = gcnew FigureAggregate();
		for each (Figure^ fig in this->figures)
		{
			figure->figures->Add(fig->Copy());
		}
		
		return (Figure^)figure;
	}

}
