#pragma once
using namespace System;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;

namespace GraphicsCpp {
	ref class Settings
	{ //this->selectionPen->DashCap = System::Drawing::Drawing2D::DashCap::Round
	private:
		static Pen ^ selectionPen = gcnew Pen(Color::Blue, 2);
		static String^ serializationFilePath = "SavedFiles/";
		static String^ serializationFileExtenstion = ".bin";

	public:
		static Pen^ GetSelectionPen();
		static void SetSelectionPenColor(Color color);
		static String^ GetSerializationFilePath();
		static String^ GetSerializationFileExtenstion();
	};
}