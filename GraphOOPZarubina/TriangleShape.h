#pragma once
#include "Figure.h"
namespace CourseWork {

	ref class TriangleShape :
		public Figure
	{
	public:
		virtual void UpdateCollisionShape() override;
		TriangleShape();
		virtual bool CheckPoint(PointF^ point) override;
		virtual void Draw(Graphics^ g) override;
		virtual Figure^ Copy() override;
	};

}