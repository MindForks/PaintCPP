#pragma once

#include <fstream>
#include <iostream>

using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization;

using namespace System;


namespace GraphicsCpp {
	ref class Figure;
	ref class FigureTriangle;
	ref class FigureRectangle;
	ref class FigureEllipse;
	ref class FigureAggregate;

	[XmlIncludeAttribute(FigureTriangle::typeid)]
	[XmlIncludeAttribute(FigureRectangle::typeid)]
	[XmlIncludeAttribute(FigureEllipse::typeid)]
	[XmlIncludeAttribute(FigureAggregate::typeid)]
	[SerializableAttribute]
	public ref class Snapshot 
	{
	public:
		Snapshot() {};
		Snapshot(Figure^ figure, System::String^ snapName) {
			this->figure = figure;
			this->snapName = snapName;
		}

		Figure^ figure;
		System::String^ snapName;
	};	
}