#pragma once
#include "Figure.h"

namespace CourseWork {

	ref class EllipseShape :
		public Figure
	{
	public:
		virtual void UpdateCollisionShape() override;
		EllipseShape();
		virtual bool CheckPoint(PointF^ point) override;
		virtual void Draw(Graphics^ g) override;
		virtual Figure^ Copy() override;
	};

}