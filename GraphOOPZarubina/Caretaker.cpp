#include "Caretaker.h"

namespace GraphicsCpp {

	void Caretaker::AddSnaphot(Figure^ figure, System::String^ snapshotName)
	{
		this->snaphotList->Add(gcnew Snapshot(figure->Copy(), snapshotName));
	}

	Figure^ Caretaker::RestoreFromSnapshot(Snapshot ^ snap)
	{
		return snap->figure;
	}
}