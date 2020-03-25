#pragma once
#include "Figure.h"
namespace GraphicsCpp {

	ref class FigureTriangle :
		public Figure
	{
	public:
		virtual void UpdateCollisionShape() override;
		FigureTriangle();
		virtual bool CheckPoint(PointF^ point) override;
		virtual void Draw(Graphics^ g) override;
		virtual Figure^ Copy() override;
	};

}