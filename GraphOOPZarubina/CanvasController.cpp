#include "CanvasController.h"

namespace CourseWork {

	CanvasController::CanvasController(PictureBox^ box) {
		this->box = box;
		this->figures = gcnew List<Figure^>();
		this->canvas = gcnew Bitmap(box->Width, box->Height);
		this->g = Graphics::FromImage(this->canvas);
		this->background = gcnew Bitmap(box->Width, box->Height);
		this->gb = Graphics::FromImage(this->background);
		this->snapCarateker = gcnew SnapshotCaretaker();
	}

	Figure^ CanvasController::getObject(PointF^ point) {
		for (int i = this->figures->Count - 1; i >= 0; i--) {
			if (this->figures[i]->CheckPoint(point)) {
				return this->figures[i];
			}
		}
		return nullptr;
	}

	void CanvasController::Refresh() {
		this->g->Clear(System::Drawing::Color::White);
		//this->g->DrawImage((Image^)this->background, 0, 0);
		for each (Figure^ figure in this->figures) {
			if (figure->IsSelected) {
				figure->DrawWithSelection(this->g);
			}
			else {
				figure->Draw(this->g);
			}
		}
		this->box->Image = this->canvas;
	}

	void CanvasController::Resize() {
		this->canvas = gcnew Bitmap(box->Width, box->Height);
		this->g = Graphics::FromImage(this->canvas);
		this->background = gcnew Bitmap(box->Width, box->Height);
		this->gb = Graphics::FromImage(this->background);
	}

	void CanvasController::DeselectAll()
	{
		for each (Figure^ figure in this->figures) {
			figure->IsSelected = false;
		}
	}

	void CanvasController::DragSelected(PointF^ point)
	{
		for each (Figure^ figure in this->figures) {
			if (figure->IsSelected) {
				figure->Drag(point);
			}
		}
	}

	void CanvasController::StartDragSelected(PointF^ point)
	{
		for each (Figure^ figure in this->figures) {
			if (figure->IsSelected) {
				figure->StartDrag(point);
			}
		}
	}

	void CanvasController::DiformateIntersectedFigures()
	{
		for each (Figure^ fig1 in this->figures) {
			if (fig1->IsSelected) {
				for each (Figure^ fig2 in this->figures) {
					if (!fig2->IsSelected && fig2->CheckColision(fig1)) {
						fig2->Diformate();
					}
				}
			}
		}
	}

	void CanvasController::RemoveSelected()
	{
		for (int i = 0; i < this->figures->Count; i++) {
			if (this->figures[i]->IsSelected) {
				this->figures->RemoveAt(i);
				i--;
			}
		}
	}

	void CanvasController::SelectByIntersection(Figure^ figure) {
		for each (Figure^ fig in this->figures) {
			if (figure != fig && (figure->CheckColision(fig) || fig->CheckColision(figure))) {
				fig->IsSelected = true;
			}
		}
	}
}
