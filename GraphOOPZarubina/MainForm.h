#pragma once
#include "RectangleShape.h"
#include "TriangleShape.h"
#include "EllipseShape.h"
#include "CanvasController.h"
#include "ShapeUnion.h"
#include <string>


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
	private: System::Windows::Forms::Button^  btnGroup;
	private: System::Windows::Forms::Button^  btnSaveSelected;
	private: System::Windows::Forms::ListBox^  lstSnapshots;
	private: System::Windows::Forms::Button^  btnLoadFromLst;

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
			this->btnGroup = (gcnew System::Windows::Forms::Button());
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
			this->btnSaveSelected = (gcnew System::Windows::Forms::Button());
			this->lstSnapshots = (gcnew System::Windows::Forms::ListBox());
			this->btnLoadFromLst = (gcnew System::Windows::Forms::Button());
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
			this->canvas->Location = System::Drawing::Point(24, 123);
			this->canvas->Margin = System::Windows::Forms::Padding(6);
			this->canvas->Name = L"canvas";
			this->canvas->Size = System::Drawing::Size(1872, 791);
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
			this->panel1->Controls->Add(this->btnGroup);
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
			this->panel1->Location = System::Drawing::Point(24, 23);
			this->panel1->Margin = System::Windows::Forms::Padding(6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1876, 88);
			this->panel1->TabIndex = 6;
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox1->Location = System::Drawing::Point(1708, 6);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(164, 79);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"Explode";
			this->checkBox1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox1_CheckedChanged);
			// 
			// btnGroup
			// 
			this->btnGroup->Location = System::Drawing::Point(540, 6);
			this->btnGroup->Margin = System::Windows::Forms::Padding(6);
			this->btnGroup->Name = L"btnGroup";
			this->btnGroup->Size = System::Drawing::Size(112, 79);
			this->btnGroup->TabIndex = 7;
			this->btnGroup->Text = L"Group";
			this->btnGroup->UseVisualStyleBackColor = true;
			this->btnGroup->Click += gcnew System::EventHandler(this, &MainForm::group_Click);
			// 
			// erase
			// 
			this->erase->Location = System::Drawing::Point(676, 6);
			this->erase->Margin = System::Windows::Forms::Padding(6);
			this->erase->Name = L"erase";
			this->erase->Size = System::Drawing::Size(98, 79);
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
			this->label1->Location = System::Drawing::Point(1042, 54);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(486, 29);
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
			this->trackBar1->Location = System::Drawing::Point(1042, 6);
			this->trackBar1->Margin = System::Windows::Forms::Padding(6);
			this->trackBar1->Maximum = 20;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(486, 77);
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
			this->stroke->Location = System::Drawing::Point(922, 4);
			this->stroke->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->stroke->Name = L"stroke";
			this->stroke->Size = System::Drawing::Size(106, 77);
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
			this->fill->Location = System::Drawing::Point(802, 6);
			this->fill->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->fill->Name = L"fill";
			this->fill->Size = System::Drawing::Size(106, 77);
			this->fill->TabIndex = 4;
			this->fill->Text = L"Fill";
			this->fill->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->fill->Click += gcnew System::EventHandler(this, &MainForm::fill_Click);
			// 
			// deformation
			// 
			this->deformation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->deformation->Appearance = System::Windows::Forms::Appearance::Button;
			this->deformation->Location = System::Drawing::Point(1538, 6);
			this->deformation->Margin = System::Windows::Forms::Padding(4);
			this->deformation->Name = L"deformation";
			this->deformation->Size = System::Drawing::Size(170, 79);
			this->deformation->TabIndex = 2;
			this->deformation->Text = L"Allow deformation";
			this->deformation->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->deformation->UseVisualStyleBackColor = true;
			// 
			// triangle
			// 
			this->triangle->Appearance = System::Windows::Forms::Appearance::Button;
			this->triangle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->triangle->Location = System::Drawing::Point(390, 2);
			this->triangle->Margin = System::Windows::Forms::Padding(4);
			this->triangle->Name = L"triangle";
			this->triangle->Size = System::Drawing::Size(128, 81);
			this->triangle->TabIndex = 0;
			this->triangle->Text = L"Triangle";
			this->triangle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->triangle->UseVisualStyleBackColor = true;
			// 
			// ellipse
			// 
			this->ellipse->Appearance = System::Windows::Forms::Appearance::Button;
			this->ellipse->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ellipse->Location = System::Drawing::Point(252, 2);
			this->ellipse->Margin = System::Windows::Forms::Padding(4);
			this->ellipse->Name = L"ellipse";
			this->ellipse->Size = System::Drawing::Size(128, 81);
			this->ellipse->TabIndex = 0;
			this->ellipse->Text = L"Ellipse";
			this->ellipse->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ellipse->UseVisualStyleBackColor = true;
			// 
			// rectangle
			// 
			this->rectangle->Appearance = System::Windows::Forms::Appearance::Button;
			this->rectangle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->rectangle->Location = System::Drawing::Point(114, 2);
			this->rectangle->Margin = System::Windows::Forms::Padding(4);
			this->rectangle->Name = L"rectangle";
			this->rectangle->Size = System::Drawing::Size(128, 81);
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
			this->pointer->Location = System::Drawing::Point(4, 4);
			this->pointer->Margin = System::Windows::Forms::Padding(4);
			this->pointer->Name = L"pointer";
			this->pointer->Size = System::Drawing::Size(96, 81);
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
			// btnSaveSelected
			// 
			this->btnSaveSelected->Location = System::Drawing::Point(481, 138);
			this->btnSaveSelected->Name = L"btnSaveSelected";
			this->btnSaveSelected->Size = System::Drawing::Size(129, 78);
			this->btnSaveSelected->TabIndex = 7;
			this->btnSaveSelected->Text = L"Save selected";
			this->btnSaveSelected->UseVisualStyleBackColor = true;
			this->btnSaveSelected->Click += gcnew System::EventHandler(this, &MainForm::btnSaveSelected_Click);
			// 
			// lstSnapshots
			// 
			this->lstSnapshots->FormattingEnabled = true;
			this->lstSnapshots->ItemHeight = 25;
			this->lstSnapshots->Location = System::Drawing::Point(94, 138);
			this->lstSnapshots->Name = L"lstSnapshots";
			this->lstSnapshots->Size = System::Drawing::Size(345, 304);
			this->lstSnapshots->TabIndex = 8;
			// 
			// btnLoadFromLst
			// 
			this->btnLoadFromLst->Location = System::Drawing::Point(481, 243);
			this->btnLoadFromLst->Name = L"btnLoadFromLst";
			this->btnLoadFromLst->Size = System::Drawing::Size(129, 90);
			this->btnLoadFromLst->TabIndex = 9;
			this->btnLoadFromLst->Text = L"Load From List";
			this->btnLoadFromLst->UseVisualStyleBackColor = true;
			this->btnLoadFromLst->Click += gcnew System::EventHandler(this, &MainForm::btnLoadFromLst_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 940);
			this->Controls->Add(this->btnLoadFromLst);
			this->Controls->Add(this->lstSnapshots);
			this->Controls->Add(this->btnSaveSelected);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->canvas);
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(6);
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
		if (last_figure != nullptr && pointer->Checked == false) {
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
		controller->snapCarateker = gcnew SnapshotCaretaker();
		lstSnapshots->Items->Clear();
		controller->Refresh();
	}

	private: System::Void MainForm_Resize(System::Object^  sender, System::EventArgs^  e) {
		if (controller != nullptr)
		{
			controller->Resize();
			controller->Refresh();
		}
		else
		{
			this->Width = 1000;
			this->Height = 530;
		}
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
	
	private: System::Void btnSaveSelected_Click(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0; i < this->controller->figures->Count; i++) {
			if (this->controller->figures[i]->IsSelected) {
				System::String^ snapName =  "name" + i;
				this->controller->snapCarateker->AddSnaphot(this->controller->figures[i], snapName);
			}
		}
		UpdateLstSnaphots();
	}
	
	private: System::Void btnLoadFromLst_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->lstSnapshots->SelectedItem != nullptr)
		{
			Snapshot^ snap = (Snapshot^)(this->lstSnapshots->SelectedItem);
			if (snap != nullptr)
			{
				controller->figures->Add(controller->snapCarateker->RestoreFromSnapshot(snap)->Copy());
				controller->Refresh();
			}
		}
	}
	
	private: void UpdateLstSnaphots()
	{
		this->lstSnapshots->Items->Clear();
		this->lstSnapshots->DisplayMember = "snapName";
		this->lstSnapshots->ValueMember = "snapName";

		for each (Snapshot^ var in controller->snapCarateker->SnaphotList)
		{
			this->lstSnapshots->Items->Add(var);
		}
	}
	
};
}
