#pragma once

#include "Figure.h"

namespace CourseWork {
	ref class CanvasController
	{
	private:
		PictureBox^ box;
		Bitmap^ canvas;
		Bitmap^ background;
		Graphics^ g; 
		Graphics^ gb;

	public:
		CanvasController(PictureBox^ box);
		List<Figure^>^ figures;
		Figure^ getObject(PointF^ point);
		void Explode();
		void Refresh();
		void Resize();
		void DeselectAll();
		void DragSelected(PointF^ point);
		void SelectByIntersection(Figure^ figure);
		void StartDragSelected(PointF^ point);
		void DiformateIntersectedFigures();
		void RemoveSelected();
	};
}



