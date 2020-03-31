#pragma once
#include "Figure.h"

namespace GraphicsCpp {
	[SerializableAttribute]
	public ref class FigureEllipse :
		public Figure
	{
	public:
		virtual void UpdateCollisionShape() override;
		FigureEllipse();
		virtual bool CheckPoint(PointF^ point) override;
		virtual void Draw(Graphics^ g) override;
		virtual Figure^ Copy() override;
	};

}