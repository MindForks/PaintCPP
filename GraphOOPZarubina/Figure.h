#ifndef FIGURE
#define FIGURE

#include "Snapshot.h"

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Collections::ObjectModel;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;

namespace GraphicsCpp {


	public ref class Figure // composite
	{
	private:
		PointF^ dragPosition;  //used when we calculate drag delta
	
	protected:
		System::Drawing::Color color = System::Drawing::Color::LightGray;
		System::Drawing::Color borderColor = System::Drawing::Color::Black;
		float borderWidth = 0;
		PointF^ position = gcnew PointF(0, 0);
		float width = 0;
		float height = 0;
		Pen^ pen;
		SolidBrush^ brush;
		bool isSelected;
	
	public:
		virtual void UpdateCollisionShape();
		array<PointF>^ collisionShape;
		Pen^ selectionPen;

		Figure();
		Figure(System::Drawing::Color color, System::Drawing::Color borderColor);
		Figure(Snapshot^ snap);
		~Figure();
		// properties:
		virtual property System::Drawing::Color Color {
			virtual System::Drawing::Color get() { return this->color; }
			virtual void set(System::Drawing::Color value) {
				this->color = value;
				this->brush = gcnew SolidBrush(this->color);
			}
		}

		virtual property System::Drawing::Color BorderColor {
			virtual System::Drawing::Color get() { return this->borderColor; }
			virtual void set(System::Drawing::Color value) {
				this->borderColor = value;
				this->pen = gcnew Pen(this->borderColor, this->borderWidth);
			}
		}

		virtual property float BorderWidth {
			virtual float get() { return this->borderWidth;  }
			virtual void set(float value) {
				this->borderWidth = value;
				this->pen = gcnew Pen(this->borderColor, this->borderWidth);
			}
		}

		virtual property PointF^ Position {
			virtual PointF^ get() { return this->position; }
			virtual void set(PointF^ value) {
				this->position = value;
				this->UpdateCollisionShape();
			}
		}

		virtual property float Width {
			virtual float get() { return this->width; }
			virtual void set(float value) { 
				this->width = value; 
				this->UpdateCollisionShape();
			}
		}

		virtual property float Height {
			virtual float get() { return this->height; }
			virtual void set(float value) { 
				this->height = value; 
				this->UpdateCollisionShape();
			}
		}

		// readonly properties:
		virtual property float Left {
			virtual float get() { return this->position->X; }
		}

		virtual property float Right {
			virtual float get() { return this->position->X + this->width; }
		}

		virtual property float Top {
			virtual float get() { return this->position->Y; }
		}

		virtual property float Bottom {
			virtual float get() { return this->position->Y + this->height; }
		}

		virtual property bool IsSelected {
			virtual bool get() { return this->isSelected; }
			virtual void set(bool value) { this->isSelected = value; }
		}

		virtual void Animate(Size size);
		virtual void Diformate();
		virtual bool CheckBorder(Size size);
		virtual bool CheckPoint(PointF^ point);
		virtual bool CheckColision(Figure^ figure);
		virtual void Draw(Graphics^ g);
		virtual void DrawWithSelection(Graphics^ g);
		virtual void StartDrag(PointF^ point); // to save startpoint of drag
		virtual void Drag(PointF^ point, Size size);
		virtual void FitRectangle(PointF^ point1, PointF^ point2); // update size acording to points
		virtual void BindPositionToFormSize(PointF^ newpos, Size size); // to perevent moving out of borders

		virtual Figure^ Copy(); // prototype pattern
	};

}

#endif // !1