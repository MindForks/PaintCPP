#pragma once
#include "Figure.h"

namespace GraphicsCpp {

	ref class RectangleShape :
		public Figure
	{
	public:
		virtual void UpdateCollisionShape() override;
		RectangleShape();
		virtual bool CheckPoint(PointF^ point) override;
		virtual void Draw(Graphics^ g) override;
		virtual Figure^ Copy() override;
		
	};

}

