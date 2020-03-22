#include "SnapshotCaretaker.h"
#include "RectangleShape.h"
#include "TriangleShape.h"
#include "EllipseShape.h"

namespace CourseWork {

	void SnapshotCaretaker::AddSnaphot(Figure^ figure, System::String^ snapshotName)
	{
		this->snaphotList->Add(gcnew Snapshot(figure->Copy(), snapshotName));
	}

	Figure^ SnapshotCaretaker::RestoreFromSnapshot(Snapshot ^ snap)
	{
		Figure^ newFigure;
		if (true) {
			newFigure = (Figure^)(gcnew RectangleShape());
		}
		else if (true) {
			newFigure = (Figure^)(gcnew TriangleShape());
		}
		else if (true) {
			newFigure = (Figure^)(gcnew EllipseShape());
		}
		//return gcnew Figure();
		return snap->figure;
	}
}