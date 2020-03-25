#include "SnapshotCaretaker.h"

namespace GraphicsCpp {

	void SnapshotCaretaker::AddSnaphot(Figure^ figure, System::String^ snapshotName)
	{
		this->snaphotList->Add(gcnew Snapshot(figure->Copy(), snapshotName));
	}

	Figure^ SnapshotCaretaker::RestoreFromSnapshot(Snapshot ^ snap)
	{
		return snap->figure;
	}
}