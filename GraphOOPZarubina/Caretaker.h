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
		void CheckAndCreateDirectory();
	public:
		Caretaker() {};

		void AddSnaphot(Figure^ figure, String^ snapshotName);
		void DeleteSnaphot(String^ snapshotName);
		Figure^ RestoreFromSnapshot(String^ snapshotName);
		
		List<String^>^ GetSavedSnapshotsName();
		bool CheckIsFileExists(String^ snapshotName);
		int GetNextSaveName();
	};
}