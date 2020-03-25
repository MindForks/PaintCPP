#pragma once

#include <fstream>
#include <iostream>

using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;

namespace GraphicsCpp {
	ref class Figure;
	public ref class Snapshot 
	{
	public:
		Snapshot(Figure^ figure, System::String^ snapName) {
			this->figure = figure;
			this->snapName = snapName;
		}

		Figure^ figure;
		System::String^ snapName;
	};	
}