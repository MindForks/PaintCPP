#include "PictureController.h"

namespace GraphicsCpp {

	PictureController::PictureController(PictureBox^ box) {
		this->box = box;
		this->figures = gcnew List<Figure^>();
		this->canvas = gcnew Bitmap(box->Width, box->Height);
		this->g = Graphics::FromImage(this->canvas);
		this->background = gcnew Bitmap(box->Width, box->Height);
		this->gb = Graphics::FromImage(this->background);
		this->snapCarateker = gcnew Caretaker();
	}

	PictureController^ PictureController::GetInstance()
	{
		if (ref_instance != nullptr)
		{
			return ref_instance;
		}
		else
		{
			return nullptr;
		}
	}

	void PictureController::InitInstance(PictureBox ^ box)
	{
		ref_instance = gcnew PictureController(box);
	}

	Figure^ PictureController::getObject(PointF^ point) {
		for (int i = this->figures->Count - 1; i >= 0; i--) {
			if (this->figures[i]->CheckPoint(point)) {
				return this->figures[i];
			}
		}
		return nullptr;
	}

	void PictureController::Refresh() {
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

	void PictureController::Resize() {
		this->canvas = gcnew Bitmap(box->Width, box->Height);
		this->g = Graphics::FromImage(this->canvas);
		this->background = gcnew Bitmap(box->Width, box->Height);
		this->gb = Graphics::FromImage(this->background);
	}

	void PictureController::DeselectAll()
	{
		for each (Figure^ figure in this->figures) {
			figure->IsSelected = false;
		}
	}

	void PictureController::DragSelected(PointF^ point)
	{
		for each (Figure^ figure in this->figures) {
			if (figure->IsSelected) {
				figure->Drag(point);
			}
		}
	}

	void PictureController::StartDragSelected(PointF^ point)
	{
		for each (Figure^ figure in this->figures) {
			if (figure->IsSelected) {
				figure->StartDrag(point);
			}
		}
	}

	void PictureController::RemoveSelected()
	{
		for (int i = 0; i < this->figures->Count; i++) {
			if (this->figures[i]->IsSelected) {
				this->figures->RemoveAt(i);
				i--;
			}
		}
	}

	void PictureController::SelectByIntersection(Figure^ figure) {
		for each (Figure^ fig in this->figures) {
			if (figure != fig && (figure->CheckColision(fig) || fig->CheckColision(figure))) {
				fig->IsSelected = true;
			}
		}
	}
}
