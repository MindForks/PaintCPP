#pragma once

#include <fstream>
#include <iostream>

using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;

namespace CourseWork {
	ref class Figure;
	public ref class Snapshot 
	{
	public:
		Snapshot(Color color, Color strokeColor, float strokeWidth, PointF^ position,
			float width, float height, Pen^ pen, SolidBrush^ brush)
		{
			this->color = color;
			this->strokeColor = strokeColor;
			this->strokeWidth = strokeWidth;
			this->position = position;
			this->width = width;
			this->height = height;
			this->pen = pen;
			this->brush = brush;
		}
		Snapshot(Figure^ figure, System::String^ snapName) {
			this->figure = figure;
			this->snapName = snapName;
		}

		Color color;
		Color strokeColor;
		float strokeWidth;
		PointF^ position;
		float width ;
		float height;
		Pen^ pen;
		SolidBrush^ brush;
		Figure^ figure;
		System::String^ snapName;
	};	

	/*std::ostream& operator<<(std::ostream& out, const Snapshot^ r)
	{
		return out << "lol";
	}*/
}