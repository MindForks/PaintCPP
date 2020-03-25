#pragma once

#include "Figure.h"
#include "SnapshotCaretaker.h"

namespace GraphicsCpp {
	ref class CanvasController
	{
	private:
		CanvasController(PictureBox^ box);
		static CanvasController^ ref_instance;
		PictureBox^ box;
		Bitmap^ canvas;
		Bitmap^ background;
		Graphics^ g; 
		Graphics^ gb;

	public:
		List<Figure^>^ figures;
		Figure^ getObject(PointF^ point);
		SnapshotCaretaker^ snapCarateker;
		static CanvasController^ GetInstance();
		static void InitInstance(PictureBox^ box);
		void Refresh();
		void Resize();
		void DeselectAll();
		void DragSelected(PointF^ point);
		void SelectByIntersection(Figure^ figure);
		void StartDragSelected(PointF^ point);
		void RemoveSelected();
	};
}



