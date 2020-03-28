#pragma once

using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;

namespace GraphicsCpp {
	ref class Settings
	{ //this->selectionPen->DashCap = System::Drawing::Drawing2D::DashCap::Round
	private:
		static Pen ^ selectionPen = gcnew Pen(Color::Blue, 2);

	public:
		static Pen^ GetSelectionPen();
		static void SetSelectionPenColor(Color color);
	};
}