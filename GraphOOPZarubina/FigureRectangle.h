#pragma once
#include "Figure.h"

namespace GraphicsCpp {

	ref class FigureRectangle :
		public Figure
	{
	public:
		virtual void UpdateCollisionShape() override;
		FigureRectangle();
		virtual bool CheckPoint(PointF^ point) override;
		virtual void Draw(Graphics^ g) override;
		virtual Figure^ Copy() override;
		
	};

}

