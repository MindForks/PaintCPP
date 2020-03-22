#pragma once

#include "Figure.h";
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;

namespace CourseWork {

	ref class Snapshot 
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
		Color color;
		Color strokeColor;
		float strokeWidth;
		PointF^ position;
		float width ;
		float height;
		Pen^ pen;
		SolidBrush^ brush;
	};

}