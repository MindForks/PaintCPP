#pragma once

#include "Figure.h";
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;

namespace CourseWork {

	ref class SnapshotCaretaker
	{
	private:
		List<Snapshot^>^ snaphotList;

	public:
		SnapshotCaretaker()
		{
			this->snaphotList = gcnew List<Snapshot^>();
		}
		void AddSnaphot(Figure^ figure);
		//properties
		property List<Snapshot^>^ SnaphotList {
			List<Snapshot^>^ get() { return this->snaphotList; }
		}

	};

}