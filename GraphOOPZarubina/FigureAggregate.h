#pragma once
#include "Figure.h"

namespace GraphicsCpp {
	ref class FigureAggregate :
		public Figure
	{

	public:
		FigureAggregate();
		List<Figure^>^ figures;
		virtual void UpdateSize();
		void InitPositionOnCreate();
		virtual void UpdateCollisionShape() override;

		// properties:
		virtual property System::Drawing::Color Color {
			virtual System::Drawing::Color get() override {
				return this->figures[0]->Color;
			}
			virtual void set(System::Drawing::Color value) override {
				for each (Figure^ figure in this->figures)
				{
					figure->Color = value;
				}
			}
		}

		virtual property System::Drawing::Color BorderColor {
			virtual System::Drawing::Color get()  override {
				return this->figures[0]->BorderColor;
			}
			virtual void set(System::Drawing::Color value)  override {
				for each (Figure^ figure in this->figures)
				{
					figure->BorderColor = value;
				}
			}
		}

		virtual property float BorderWidth {
			virtual float get()  override {
				return this->figures[0]->BorderWidth;
			}
			virtual void set(float value) override {
				for each (Figure^ figure in this->figures)
				{
					figure->BorderWidth = value;
				}
			}
		}

		virtual property PointF^ Position {
			virtual PointF^ get()  override {
				return this->position;
			}
			virtual void set(PointF^ value) override {
				for each (Figure^ figure in this->figures)
				{ 
					figure->Position = gcnew PointF(figure->Position->X + (value->X - this->position->X) , figure->Position->Y + (value->Y - this->position->Y));
				}
				this->position = value;
			}
		}

		virtual property float Width {
			virtual float get()  override {
				return this->Right - this->Left;
			}
			virtual void set(float value)  override {
				float scale = value / (this->Right - this->Left);
				for each (Figure^ figure in this->figures) {
					figure->Width *= scale;
					figure->Position = gcnew PointF(this->Position->X + (figure->Position->X - this->Position->X) * scale, figure->Position->Y);
				}
				this->width = value;
			}
		}

		virtual property float Height {
			virtual float get()  override {
				return this->Bottom - this->Top;
			}
			virtual void set(float value)  override {
				float scale = value / (this->Bottom - this->Top);
				for each (Figure^ figure in this->figures) {
					figure->Height *= scale;
					figure->Position = gcnew PointF(figure->Position->X, this->Position->Y + (figure->Position->Y - this->Position->Y) * scale);
				}
				this->height = value;
			}
		}

		virtual property bool IsSelected {
			virtual bool get() override {
				return this->isSelected;
			}
			virtual void set(bool value) override {
				this->isSelected = value;
			}
		}

		// readonly properties:
		virtual property float Left {
			virtual float get() override {
				if (this->figures->Count > 0) {
					float left = this->figures[0]->Left;
					for each (Figure^ figure in this->figures)
					{
						if (figure->Left < left) {
							left = figure->Left;
						}
					}
					return left;
				}
				else {
					return this->position->X;
				}
			}
		}

		virtual property float Right {
			virtual float get() override {
				if (this->figures->Count > 0) {
					float right = this->figures[0]->Right;
					for each (Figure^ figure in this->figures)
					{
						if (figure->Right > right) {
							right = figure->Right;
						}
					}
					return right;
				} else {
					return this->position->X;
				}
			}
			}

		virtual property float Top {
			virtual float get() override {
				if (this->figures->Count > 0) {
					float top = this->figures[0]->Top;
					for each (Figure^ figure in this->figures)
					{
						if (figure->Top < top) {
							top = figure->Top;
						}
					}
					return top;
				} else {
					return this->position->Y;
				}
			}
		}

		virtual property float Bottom {
			virtual float get() override {
				if (this->figures->Count > 0) {
					float bottom = this->figures[0]->Bottom;
					for each (Figure^ figure in this->figures)
					{
						if (figure->Bottom > bottom) {
							bottom = figure->Bottom;
						}
					}
					return bottom;
				} else {
					return this->position->Y;
				}
			}
		}
		
		virtual bool CheckPoint(PointF^ point) override;
		virtual bool CheckColision(Figure^ figure) override;
		virtual void Draw(Graphics^ g) override;
		virtual void DrawWithSelection(Graphics^ g) override;
		virtual Figure ^ Copy() override;
	};
}



