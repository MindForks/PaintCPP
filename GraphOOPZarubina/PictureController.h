#pragma once

#include "Figure.h"
#include "Caretaker.h"

namespace GraphicsCpp {
	ref class PictureController
	{
	private:
		PictureController(PictureBox^ box);
		static PictureController^ ref_instance;
		PictureBox^ box;
		Bitmap^ canvas;
		Bitmap^ background;
		Graphics^ g; 
		Graphics^ gb;

	public:
		List<Figure^>^ figures;
		Figure^ getObject(PointF^ point);
		Caretaker^ snapCarateker;
		static PictureController^ GetInstance();
		static void InitInstance(PictureBox^ box);
		void Refresh();
		void Resize();
		void DeselectAll();
		void DragSelected(PointF^ point);
		void SelectByIntersection(Figure^ figure);
		void StartDragSelected(PointF^ point);
		void RemoveSelected();
		void DiformateFiguresWhenTouch();
		void Explode();

	};
}



