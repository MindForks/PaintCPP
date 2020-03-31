#pragma once

#include "Figure.h";
#include "FigureAggregate.h";
#include "FigureRectangle.h";
#include "FigureTriangle.h";
#include "FigureEllipse.h";


using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;

namespace GraphicsCpp {

	public ref class Caretaker
	{
	private:
		List<Snapshot^>^ snaphotList;

	public:
		Caretaker()
		{
			this->snaphotList = gcnew List<Snapshot^>();
		}
		void AddSnaphot(Figure^ figure, System::String^ snapshotName);
		Figure^ RestoreFromSnapshot(Snapshot^ snap);

		//properties
		property List<Snapshot^>^ SnaphotList {
			List<Snapshot^>^ get() { return this->snaphotList; }
		}

	};
	std::ostream& operator<<(std::ostream& o_stream, const Figure^ r);

	std::istream& operator>>(std::istream& i_stream, Figure^ r);
}