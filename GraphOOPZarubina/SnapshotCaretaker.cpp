#include "SnapshotCaretaker.h"

void CourseWork::SnapshotCaretaker::AddSnaphot(Figure^ figure)
{

	this->snaphotList->Add(figure->CreateSnapshot());
}
