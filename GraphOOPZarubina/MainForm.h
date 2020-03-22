#pragma once
#include "RectangleShape.h"
#include "TriangleShape.h"
#include "EllipseShape.h"
#include "CanvasController.h"
#include "ShapeUnion.h"

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  canvas;
	protected:






	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::RadioButton^  triangle;
	private: System::Windows::Forms::RadioButton^  ellipse;




	private: System::Windows::Forms::RadioButton^  rectangle;



	private: System::Windows::Forms::RadioButton^  pointer;
	private: System::Windows::Forms::CheckBox^  deformation;
	private: System::Windows::Forms::Label^  stroke;
	private: System::Windows::Forms::Label^  fill;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  erase;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::ComponentModel::IContainer^  components;

	protected:




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->canvas = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->erase = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->stroke = (gcnew System::Windows::Forms::Label());
			this->fill = (gcnew System::Windows::Forms::Label());
			this->deformation = (gcnew System::Windows::Forms::CheckBox());
			this->triangle = (gcnew System::Windows::Forms::RadioButton());
			this->ellipse = (gcnew System::Windows::Forms::RadioButton());
			this->rectangle = (gcnew System::Windows::Forms::RadioButton());
			this->pointer = (gcnew System::Windows::Forms::RadioButton());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->canvas))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// canvas
			// 
			this->canvas->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->canvas->BackColor = System::Drawing::Color::White;
			this->canvas->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->canvas->Location = System::Drawing::Point(12, 64);
			this->canvas->Name = L"canvas";
			this->canvas->Size = System::Drawing::Size(938, 413);
			this->canvas->TabIndex = 0;
			this->canvas->TabStop = false;
			this->canvas->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseDown);
			this->canvas->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseMove);
			this->canvas->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseUp);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->erase);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->trackBar1);
			this->panel1->Controls->Add(this->stroke);
			this->panel1->Controls->Add(this->fill);
			this->panel1->Controls->Add(this->deformation);
			this->panel1->Controls->Add(this->triangle);
			this->panel1->Controls->Add(this->ellipse);
			this->panel1->Controls->Add(this->rectangle);
			this->panel1->Controls->Add(this->pointer);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(938, 46);
			this->panel1->TabIndex = 6;
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox1->Location = System::Drawing::Point(854, 3);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(82, 41);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"Explode";
			this->checkBox1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox1_CheckedChanged);
			// 
			// erase
			// 
			this->erase->Location = System::Drawing::Point(338, 3);
			this->erase->Name = L"erase";
			this->erase->Size = System::Drawing::Size(49, 41);
			this->erase->TabIndex = 7;
			this->erase->Text = L"Erase";
			this->erase->UseVisualStyleBackColor = true;
			this->erase->Click += gcnew System::EventHandler(this, &MainForm::erase_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Location = System::Drawing::Point(521, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(243, 15);
			this->label1->TabIndex = 6;
			this->label1->Text = L"1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// trackBar1
			// 
			this->trackBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBar1->AutoSize = false;
			this->trackBar1->Location = System::Drawing::Point(521, 3);
			this->trackBar1->Maximum = 20;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(243, 40);
			this->trackBar1->TabIndex = 5;
			this->trackBar1->Value = 1;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar1_Scroll);
			// 
			// stroke
			// 
			this->stroke->BackColor = System::Drawing::Color::Black;
			this->stroke->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->stroke->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->stroke->ForeColor = System::Drawing::Color::White;
			this->stroke->Location = System::Drawing::Point(461, 2);
			this->stroke->Name = L"stroke";
			this->stroke->Size = System::Drawing::Size(54, 41);
			this->stroke->TabIndex = 4;
			this->stroke->Text = L"Stroke";
			this->stroke->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->stroke->Click += gcnew System::EventHandler(this, &MainForm::stroke_Click);
			// 
			// fill
			// 
			this->fill->BackColor = System::Drawing::Color::LightGray;
			this->fill->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fill->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->fill->Location = System::Drawing::Point(401, 3);
			this->fill->Name = L"fill";
			this->fill->Size = System::Drawing::Size(54, 41);
			this->fill->TabIndex = 4;
			this->fill->Text = L"Fill";
			this->fill->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->fill->Click += gcnew System::EventHandler(this, &MainForm::fill_Click);
			// 
			// deformation
			// 
			this->deformation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->deformation->Appearance = System::Windows::Forms::Appearance::Button;
			this->deformation->Location = System::Drawing::Point(769, 3);
			this->deformation->Margin = System::Windows::Forms::Padding(2);
			this->deformation->Name = L"deformation";
			this->deformation->Size = System::Drawing::Size(85, 41);
			this->deformation->TabIndex = 2;
			this->deformation->Text = L"Allow deformation";
			this->deformation->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->deformation->UseVisualStyleBackColor = true;
			// 
			// triangle
			// 
			this->triangle->Appearance = System::Windows::Forms::Appearance::Button;
			this->triangle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->triangle->Location = System::Drawing::Point(195, 1);
			this->triangle->Margin = System::Windows::Forms::Padding(2);
			this->triangle->Name = L"triangle";
			this->triangle->Size = System::Drawing::Size(64, 42);
			this->triangle->TabIndex = 0;
			this->triangle->Text = L"Triangle";
			this->triangle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->triangle->UseVisualStyleBackColor = true;
			// 
			// ellipse
			// 
			this->ellipse->Appearance = System::Windows::Forms::Appearance::Button;
			this->ellipse->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ellipse->Location = System::Drawing::Point(126, 1);
			this->ellipse->Margin = System::Windows::Forms::Padding(2);
			this->ellipse->Name = L"ellipse";
			this->ellipse->Size = System::Drawing::Size(64, 42);
			this->ellipse->TabIndex = 0;
			this->ellipse->Text = L"Ellipse";
			this->ellipse->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ellipse->UseVisualStyleBackColor = true;
			// 
			// rectangle
			// 
			this->rectangle->Appearance = System::Windows::Forms::Appearance::Button;
			this->rectangle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->rectangle->Location = System::Drawing::Point(57, 1);
			this->rectangle->Margin = System::Windows::Forms::Padding(2);
			this->rectangle->Name = L"rectangle";
			this->rectangle->Size = System::Drawing::Size(64, 42);
			this->rectangle->TabIndex = 0;
			this->rectangle->Text = L"Rectangle";
			this->rectangle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->rectangle->UseVisualStyleBackColor = true;
			// 
			// pointer
			// 
			this->pointer->Appearance = System::Windows::Forms::Appearance::Button;
			this->pointer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pointer->Checked = true;
			this->pointer->Location = System::Drawing::Point(2, 2);
			this->pointer->Margin = System::Windows::Forms::Padding(2);
			this->pointer->Name = L"pointer";
			this->pointer->Size = System::Drawing::Size(48, 42);
			this->pointer->TabIndex = 0;
			this->pointer->TabStop = true;
			this->pointer->Text = L"Pointer";
			this->pointer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->pointer->UseVisualStyleBackColor = true;
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(270, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 41);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Group";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::group_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(962, 489);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->canvas);
			this->KeyPreview = true;
			this->Name = L"MainForm";
			this->Text = L"Course Work : Omelchenko Daniel PZ-13-1";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::MainForm_KeyDown);
			this->Resize += gcnew System::EventHandler(this, &MainForm::MainForm_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->canvas))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
		CanvasController ^ controller; // singleton
		bool is_mouse_down = false;
		bool multiselect = false;
		PointF^ create_pos;
		Figure^ last_figure;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		create_pos = PointF(e->X, e->Y);
		if (pointer->Checked) {
			Figure^ figure = controller->getObject(create_pos);

			if (figure != nullptr) {
				if (!figure->IsSelected) {
					controller->DeselectAll();
					figure->IsSelected = true;
					figure->StartDrag(create_pos);
				}
				else {
					controller->StartDragSelected(create_pos);
				}
				//Random^ r = gcnew Random(DateTime::Now.Millisecond);
				//figure->Color = Color::FromArgb(255, r->Next(255), r->Next(255), r->Next(255));
			}
			else {
				controller->DeselectAll();
				multiselect = true;
				last_figure = (Figure^)(gcnew RectangleShape());
				last_figure->StrokeColor = Color::Cyan;
				last_figure->StrokeWidth = 2;
				last_figure->Color = Color::Transparent;
			}
		}
		else if (rectangle->Checked) {
			last_figure = (Figure^)(gcnew RectangleShape());
		}
		else if (triangle->Checked) {
			last_figure = (Figure^)(gcnew TriangleShape());
		}
		else if (ellipse->Checked) {
			last_figure = (Figure^)(gcnew EllipseShape());
		}
		if (last_figure != nullptr) {
			if (!multiselect) {
				last_figure->Color = fill->BackColor;
				last_figure->StrokeColor = stroke->BackColor;
				last_figure->StrokeWidth = trackBar1->Value;
			}
			controller->figures->Add(last_figure);
		}
		controller->Refresh();
		is_mouse_down = true;
	}

	private: System::Void pictureBox1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		is_mouse_down = false;
		if (multiselect) {
			controller->SelectByIntersection(last_figure);
			controller->figures->Remove(last_figure);
			last_figure = nullptr;
			multiselect = false;
		}
		controller->Refresh();
	}

	private: System::Void pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (is_mouse_down) {
			if (pointer->Checked) {
				if (multiselect) {
					last_figure->FitRectangle(PointF(e->X, e->Y), create_pos);
					controller->DeselectAll();
					controller->SelectByIntersection(last_figure);
				}
				else {
					controller->DragSelected(PointF(e->X, e->Y));
				}

				if (deformation->Checked) {
					controller->DiformateIntersectedFigures();
				}
			}
			else if (rectangle->Checked || ellipse->Checked || triangle->Checked) {
				last_figure->FitRectangle(PointF(e->X, e->Y), create_pos);
			}
			controller->Refresh();
		}
	}

	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		controller = gcnew CanvasController(canvas);
	}

	private: System::Void MainForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Delete) {
			controller->RemoveSelected();
			controller->Refresh();
		}
	}

	private: System::Void fill_Click(System::Object^  sender, System::EventArgs^  e) {
		colorDialog1->ShowDialog();
		fill->BackColor = colorDialog1->Color;
		fill->ForeColor = Color::FromArgb(255 - colorDialog1->Color.R, 255 - colorDialog1->Color.G, 255 - colorDialog1->Color.B);

		for each (Figure^ figure in this->controller->figures) {
			if (figure->IsSelected) {
				figure->Color = fill->BackColor;
			}
		}
		this->controller->Refresh();
	}

	private: System::Void stroke_Click(System::Object^  sender, System::EventArgs^  e) {
		colorDialog1->ShowDialog();
		stroke->BackColor = colorDialog1->Color;
		stroke->ForeColor = Color::FromArgb(255 - colorDialog1->Color.R, 255 - colorDialog1->Color.G, 255 - colorDialog1->Color.B);


		for each (Figure^ figure in this->controller->figures) {
			if (figure->IsSelected) {
				figure->StrokeColor = stroke->BackColor;
			}
		}
		this->controller->Refresh();
	}

	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = trackBar1->Value.ToString();

		for each (Figure^ figure in this->controller->figures) {
			if (figure->IsSelected) {
				figure->StrokeWidth = trackBar1->Value;
			}
		}
		this->controller->Refresh();
	}

	private: System::Void erase_Click(System::Object^  sender, System::EventArgs^  e) {
		controller->figures->Clear();
		controller->Refresh();
	}

	private: System::Void MainForm_Resize(System::Object^  sender, System::EventArgs^  e) {
		controller->Resize();
		controller->Refresh();
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		controller->Explode();
		controller->Refresh();
	}

	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		timer1->Enabled = !timer1->Enabled;
	}


	private: System::Void group_Click(System::Object^  sender, System::EventArgs^  e) {
		Figure^ group = (Figure^)(gcnew ShapeUnion());
		for (int i = 0; i < this->controller->figures->Count; i++) {
			if (this->controller->figures[i]->IsSelected) {
				((ShapeUnion^)group)->figures->Add(this->controller->figures[i]->Copy());
				controller->figures->RemoveAt(i);
				i--;
			}
		}
		// controller->figures->RemoveAt()
		((ShapeUnion^)group)->UpdateSize();
		((ShapeUnion^)group)->IsSelected = true;
		controller->figures->Add(group);
		controller->Refresh();
	}
	};
}
