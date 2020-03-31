#pragma once
#include "FigureRectangle.h"
#include "FigureTriangle.h"
#include "FigureEllipse.h"
#include "PictureController.h"
#include "FigureAggregate.h"
#include <string>


namespace GraphicsCpp {

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
	private: System::Windows::Forms::RadioButton^  rbTriangle;
	private: System::Windows::Forms::RadioButton^  rbEllipse;


	private: System::Windows::Forms::RadioButton^  rbRectangle;





	private: System::Windows::Forms::RadioButton^  rbPointer;








	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnClean;



	private: System::Windows::Forms::Button^  btnGroup;
	private: System::Windows::Forms::Button^  btnSaveSelected;
	private: System::Windows::Forms::ListBox^  lstSnapshots;
	private: System::Windows::Forms::Button^  btnLoadFromLst;
	private: System::Windows::Forms::Button^  btnFill;
	private: System::Windows::Forms::Button^  btnBorder;
	private: System::Windows::Forms::CheckBox^  ckbDiformate;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::CheckBox^  ckbMoveToBorders;
	private: System::Windows::Forms::CheckBox^  ckbTrace;


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
			this->ckbTrace = (gcnew System::Windows::Forms::CheckBox());
			this->ckbMoveToBorders = (gcnew System::Windows::Forms::CheckBox());
			this->ckbDiformate = (gcnew System::Windows::Forms::CheckBox());
			this->btnBorder = (gcnew System::Windows::Forms::Button());
			this->btnFill = (gcnew System::Windows::Forms::Button());
			this->lstSnapshots = (gcnew System::Windows::Forms::ListBox());
			this->btnLoadFromLst = (gcnew System::Windows::Forms::Button());
			this->btnGroup = (gcnew System::Windows::Forms::Button());
			this->btnClean = (gcnew System::Windows::Forms::Button());
			this->btnSaveSelected = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->rbTriangle = (gcnew System::Windows::Forms::RadioButton());
			this->rbEllipse = (gcnew System::Windows::Forms::RadioButton());
			this->rbRectangle = (gcnew System::Windows::Forms::RadioButton());
			this->rbPointer = (gcnew System::Windows::Forms::RadioButton());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
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
			this->canvas->Location = System::Drawing::Point(377, 23);
			this->canvas->Margin = System::Windows::Forms::Padding(6);
			this->canvas->Name = L"canvas";
			this->canvas->Size = System::Drawing::Size(1512, 1006);
			this->canvas->TabIndex = 0;
			this->canvas->TabStop = false;
			this->canvas->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseDown);
			this->canvas->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseMove);
			this->canvas->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseUp);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel1->Controls->Add(this->ckbTrace);
			this->panel1->Controls->Add(this->ckbMoveToBorders);
			this->panel1->Controls->Add(this->ckbDiformate);
			this->panel1->Controls->Add(this->btnBorder);
			this->panel1->Controls->Add(this->btnFill);
			this->panel1->Controls->Add(this->lstSnapshots);
			this->panel1->Controls->Add(this->btnLoadFromLst);
			this->panel1->Controls->Add(this->btnGroup);
			this->panel1->Controls->Add(this->btnClean);
			this->panel1->Controls->Add(this->btnSaveSelected);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->trackBar1);
			this->panel1->Controls->Add(this->rbTriangle);
			this->panel1->Controls->Add(this->rbEllipse);
			this->panel1->Controls->Add(this->rbRectangle);
			this->panel1->Controls->Add(this->rbPointer);
			this->panel1->Location = System::Drawing::Point(24, 23);
			this->panel1->Margin = System::Windows::Forms::Padding(6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(341, 1004);
			this->panel1->TabIndex = 6;
			// 
			// ckbTrace
			// 
			this->ckbTrace->AutoSize = true;
			this->ckbTrace->Location = System::Drawing::Point(9, 282);
			this->ckbTrace->Name = L"ckbTrace";
			this->ckbTrace->Size = System::Drawing::Size(296, 29);
			this->ckbTrace->TabIndex = 15;
			this->ckbTrace->Text = L"Перемещение со следом";
			this->ckbTrace->UseVisualStyleBackColor = true;
			this->ckbTrace->CheckedChanged += gcnew System::EventHandler(this, &MainForm::ckbTrace_CheckedChanged);
			// 
			// ckbMoveToBorders
			// 
			this->ckbMoveToBorders->AutoSize = true;
			this->ckbMoveToBorders->Location = System::Drawing::Point(187, 230);
			this->ckbMoveToBorders->Name = L"ckbMoveToBorders";
			this->ckbMoveToBorders->Size = System::Drawing::Size(146, 29);
			this->ckbMoveToBorders->TabIndex = 14;
			this->ckbMoveToBorders->Text = L"Движение";
			this->ckbMoveToBorders->UseVisualStyleBackColor = true;
			this->ckbMoveToBorders->CheckedChanged += gcnew System::EventHandler(this, &MainForm::ckbMoveToBorders_CheckedChanged);
			// 
			// ckbDiformate
			// 
			this->ckbDiformate->AutoSize = true;
			this->ckbDiformate->Location = System::Drawing::Point(10, 230);
			this->ckbDiformate->Name = L"ckbDiformate";
			this->ckbDiformate->Size = System::Drawing::Size(175, 29);
			this->ckbDiformate->TabIndex = 12;
			this->ckbDiformate->Text = L"Деформация";
			this->ckbDiformate->UseVisualStyleBackColor = true;
			// 
			// btnBorder
			// 
			this->btnBorder->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnBorder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnBorder->Location = System::Drawing::Point(175, 404);
			this->btnBorder->Margin = System::Windows::Forms::Padding(6);
			this->btnBorder->Name = L"btnBorder";
			this->btnBorder->Size = System::Drawing::Size(150, 62);
			this->btnBorder->TabIndex = 11;
			this->btnBorder->Text = L"Граница";
			this->btnBorder->UseVisualStyleBackColor = true;
			this->btnBorder->Click += gcnew System::EventHandler(this, &MainForm::btnBorder_Click);
			// 
			// btnFill
			// 
			this->btnFill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnFill->ForeColor = System::Drawing::Color::SkyBlue;
			this->btnFill->Location = System::Drawing::Point(11, 404);
			this->btnFill->Margin = System::Windows::Forms::Padding(6);
			this->btnFill->Name = L"btnFill";
			this->btnFill->Size = System::Drawing::Size(152, 62);
			this->btnFill->TabIndex = 10;
			this->btnFill->Text = L"Заливка";
			this->btnFill->UseVisualStyleBackColor = true;
			this->btnFill->Click += gcnew System::EventHandler(this, &MainForm::btnFill_Click);
			// 
			// lstSnapshots
			// 
			this->lstSnapshots->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lstSnapshots->DisplayMember = L"snapName";
			this->lstSnapshots->FormattingEnabled = true;
			this->lstSnapshots->ItemHeight = 25;
			this->lstSnapshots->Location = System::Drawing::Point(10, 558);
			this->lstSnapshots->Name = L"lstSnapshots";
			this->lstSnapshots->Size = System::Drawing::Size(315, 354);
			this->lstSnapshots->TabIndex = 8;
			this->lstSnapshots->ValueMember = L"snapName";
			// 
			// btnLoadFromLst
			// 
			this->btnLoadFromLst->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnLoadFromLst->Location = System::Drawing::Point(175, 918);
			this->btnLoadFromLst->Name = L"btnLoadFromLst";
			this->btnLoadFromLst->Size = System::Drawing::Size(150, 79);
			this->btnLoadFromLst->TabIndex = 9;
			this->btnLoadFromLst->Text = L"Загрузить";
			this->btnLoadFromLst->UseVisualStyleBackColor = true;
			this->btnLoadFromLst->Click += gcnew System::EventHandler(this, &MainForm::btnLoadFromLst_Click);
			// 
			// btnGroup
			// 
			this->btnGroup->Location = System::Drawing::Point(11, 326);
			this->btnGroup->Margin = System::Windows::Forms::Padding(6);
			this->btnGroup->Name = L"btnGroup";
			this->btnGroup->Size = System::Drawing::Size(152, 62);
			this->btnGroup->TabIndex = 7;
			this->btnGroup->Text = L"Группа";
			this->btnGroup->UseVisualStyleBackColor = true;
			this->btnGroup->Click += gcnew System::EventHandler(this, &MainForm::group_Click);
			// 
			// btnClean
			// 
			this->btnClean->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnClean->Location = System::Drawing::Point(175, 326);
			this->btnClean->Margin = System::Windows::Forms::Padding(6);
			this->btnClean->Name = L"btnClean";
			this->btnClean->Size = System::Drawing::Size(150, 62);
			this->btnClean->TabIndex = 7;
			this->btnClean->Text = L"Отчистить";
			this->btnClean->UseVisualStyleBackColor = true;
			this->btnClean->Click += gcnew System::EventHandler(this, &MainForm::btnClean_Click);
			// 
			// btnSaveSelected
			// 
			this->btnSaveSelected->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnSaveSelected->Location = System::Drawing::Point(11, 918);
			this->btnSaveSelected->Name = L"btnSaveSelected";
			this->btnSaveSelected->Size = System::Drawing::Size(152, 79);
			this->btnSaveSelected->TabIndex = 7;
			this->btnSaveSelected->Text = L"Сохранить";
			this->btnSaveSelected->UseVisualStyleBackColor = true;
			this->btnSaveSelected->Click += gcnew System::EventHandler(this, &MainForm::btnSaveSelected_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Location = System::Drawing::Point(11, 516);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(315, 33);
			this->label1->TabIndex = 6;
			this->label1->Text = L"1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// trackBar1
			// 
			this->trackBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBar1->AutoSize = false;
			this->trackBar1->Location = System::Drawing::Point(11, 475);
			this->trackBar1->Margin = System::Windows::Forms::Padding(6);
			this->trackBar1->Maximum = 20;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(310, 52);
			this->trackBar1->TabIndex = 5;
			this->trackBar1->Value = 1;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar1_Scroll);
			// 
			// rbTriangle
			// 
			this->rbTriangle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->rbTriangle->Location = System::Drawing::Point(11, 115);
			this->rbTriangle->Margin = System::Windows::Forms::Padding(4);
			this->rbTriangle->Name = L"rbTriangle";
			this->rbTriangle->Size = System::Drawing::Size(225, 58);
			this->rbTriangle->TabIndex = 0;
			this->rbTriangle->Text = L"Треугольник";
			this->rbTriangle->UseVisualStyleBackColor = true;
			// 
			// rbEllipse
			// 
			this->rbEllipse->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->rbEllipse->Location = System::Drawing::Point(11, 165);
			this->rbEllipse->Margin = System::Windows::Forms::Padding(4);
			this->rbEllipse->Name = L"rbEllipse";
			this->rbEllipse->Size = System::Drawing::Size(225, 58);
			this->rbEllipse->TabIndex = 0;
			this->rbEllipse->Text = L"Элипс";
			this->rbEllipse->UseVisualStyleBackColor = true;
			// 
			// rbRectangle
			// 
			this->rbRectangle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->rbRectangle->Location = System::Drawing::Point(11, 65);
			this->rbRectangle->Margin = System::Windows::Forms::Padding(4);
			this->rbRectangle->Name = L"rbRectangle";
			this->rbRectangle->Size = System::Drawing::Size(225, 58);
			this->rbRectangle->TabIndex = 0;
			this->rbRectangle->Text = L"Прямоугольник";
			this->rbRectangle->UseVisualStyleBackColor = true;
			// 
			// rbPointer
			// 
			this->rbPointer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->rbPointer->Checked = true;
			this->rbPointer->Location = System::Drawing::Point(11, 14);
			this->rbPointer->Margin = System::Windows::Forms::Padding(4);
			this->rbPointer->Name = L"rbPointer";
			this->rbPointer->Size = System::Drawing::Size(225, 58);
			this->rbPointer->TabIndex = 0;
			this->rbPointer->TabStop = true;
			this->rbPointer->Text = L"Указатель";
			this->rbPointer->UseVisualStyleBackColor = true;
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1044);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->canvas);
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(6);
			this->MinimumSize = System::Drawing::Size(1200, 1000);
			this->Name = L"MainForm";
			this->Text = L"Графический редактор";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::MainForm_KeyDown);
			this->Resize += gcnew System::EventHandler(this, &MainForm::MainForm_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->canvas))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
		bool is_mouse_down = false;
		bool multiselect = false;
		PointF^ create_pos;
		Figure^ last_figure;

	private: System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		PictureController^ controller = PictureController::GetInstance();
		create_pos = PointF(e->X, e->Y);
		if (rbPointer->Checked) {
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
				last_figure = (Figure^)(gcnew FigureRectangle());
				last_figure->BorderColor = Color::Cyan;
				last_figure->BorderWidth = 2;
				last_figure->Color = Color::Transparent;
			}
		}
		else if (rbRectangle->Checked) {
			last_figure = (Figure^)(gcnew FigureRectangle());
		}
		else if (rbTriangle->Checked) {
			last_figure = (Figure^)(gcnew FigureTriangle());
		}
		else if (rbEllipse->Checked) {
			last_figure = (Figure^)(gcnew FigureEllipse());
		}
		if (last_figure != nullptr && rbPointer->Checked == false) {
			if (!multiselect) {
				last_figure->Color = btnFill->ForeColor;
				last_figure->BorderColor = btnBorder->ForeColor;
				last_figure->BorderWidth = trackBar1->Value;
			}
			controller->figures->Add(last_figure);
		}
		controller->Refresh(false);
		is_mouse_down = true;
	}

	private: System::Void pictureBox1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		PictureController^ controller = PictureController::GetInstance();
		is_mouse_down = false;
		if (multiselect) {
			controller->SelectByIntersection(last_figure);
			controller->figures->Remove(last_figure);
			last_figure = nullptr;
			multiselect = false;
		}
		controller->Refresh(false);
	}

	private: System::Void pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (is_mouse_down) {
			PictureController^ controller = PictureController::GetInstance();
			if (rbPointer->Checked) {
				if (multiselect) {
					last_figure->FitRectangle(PointF(e->X, e->Y), create_pos);
					controller->DeselectAll();
					controller->SelectByIntersection(last_figure);
				}
				else {
					controller->DragSelected(PointF(e->X, e->Y));
				}
				if (ckbDiformate->Checked)
				{
					controller->DiformateFiguresWhenTouch();
				}
				controller->Refresh(ckbTrace->Checked);
			}
			else if (rbRectangle->Checked || rbEllipse->Checked || rbTriangle->Checked) {
				last_figure->FitRectangle(PointF(e->X, e->Y), create_pos);
				controller->Refresh(false);

			}
		}
	}

	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		PictureController::InitInstance(canvas);
	}

	private: System::Void MainForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Delete) {
			PictureController^ controller = PictureController::GetInstance();
			controller->RemoveSelected();
			controller->Refresh(false);
		}
	}

	private: System::Void btnFill_Click(System::Object^  sender, System::EventArgs^  e) {
		PictureController^ controller = PictureController::GetInstance();
		colorDialog1->ShowDialog();
		btnFill->ForeColor = colorDialog1->Color;

		for each (Figure^ figure in controller->figures) {
			if (figure->IsSelected) {
				figure->Color = btnFill->ForeColor;
			}
		}
		controller->Refresh(false);
	}
	private: System::Void btnBorder_Click(System::Object^  sender, System::EventArgs^  e) {
		PictureController^ controller = PictureController::GetInstance();
		colorDialog1->ShowDialog();
		btnBorder->ForeColor = colorDialog1->Color;

		for each (Figure^ figure in controller->figures) {
			if (figure->IsSelected) {
				figure->BorderColor = btnBorder->ForeColor;
			}
		}
		controller->Refresh(false);
	}

	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
		PictureController^ controller = PictureController::GetInstance();
		label1->Text = trackBar1->Value.ToString();

		for each (Figure^ figure in controller->figures) {
			if (figure->IsSelected) {
				figure->BorderWidth = trackBar1->Value;
			}
		}
		controller->Refresh(false);
	}

	private: System::Void btnClean_Click(System::Object^  sender, System::EventArgs^  e) {
		PictureController^ controller = PictureController::GetInstance();
		controller->figures->Clear();
		controller->snapCarateker = gcnew Caretaker();
		lstSnapshots->Items->Clear();
		controller->Refresh(false);
	}

	private: System::Void MainForm_Resize(System::Object^  sender, System::EventArgs^  e) {
		PictureController^ controller = PictureController::GetInstance();
		if (controller != nullptr)
		{
			controller->Resize();
			controller->Refresh(false);
		}
		else
		{
			this->Width = 970;
			this->Height = 580;
		}
	}

	private: System::Void group_Click(System::Object^  sender, System::EventArgs^  e) {
		PictureController^ controller = PictureController::GetInstance();
		Figure^ group = (Figure^)(gcnew FigureAggregate());
		for (int i = 0; i < controller->figures->Count; i++) {
			if (controller->figures[i]->IsSelected) {
				((FigureAggregate^)group)->figures->Add(controller->figures[i]->Copy());
				controller->figures->RemoveAt(i);
				i--;
			}
		}
		((FigureAggregate^)group)->UpdateSize();
		((FigureAggregate^)group)->IsSelected = true;
		((FigureAggregate^)group)->InitPositionOnCreate();
		controller->figures->Add(group);
		controller->Refresh(false);
	}
	
	private: System::Void btnSaveSelected_Click(System::Object^  sender, System::EventArgs^  e) {
		PictureController^ controller = PictureController::GetInstance();
		for (int i = 0; i < controller->figures->Count; i++) {
			if (controller->figures[i]->IsSelected) {
				System::String^ snapName =  "Item " + (controller->snapCarateker->SnaphotList->Count + 1);
				controller->snapCarateker->AddSnaphot(controller->figures[i], snapName);
			}
		}
		UpdateLstSnaphots();
	}
	
	private: System::Void btnLoadFromLst_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->lstSnapshots->SelectedIndex != -1)
		{
			PictureController^ controller = PictureController::GetInstance();
			Snapshot^ snap = controller->snapCarateker->SnaphotList[lstSnapshots->SelectedIndex];
			if (snap != nullptr)
			{
				controller->DeselectAll();
				Figure^ figureToAdd = controller->snapCarateker->RestoreFromSnapshot(snap)->Copy();
				figureToAdd->IsSelected = true;
				controller->figures->Add(figureToAdd);
				controller->Refresh(false);
				UpdateLstSnaphots();
			}
		}
	}
	
	private: void UpdateLstSnaphots()
	{
		PictureController^ controller = PictureController::GetInstance();
		this->lstSnapshots->Items->Clear();

		for(int i = 0; i < controller->snapCarateker->SnaphotList->Count; i++)
		{
			Snapshot^ item = controller->snapCarateker->SnaphotList[i];
			this->lstSnapshots->Items->Add((i+1) + ". " +item->snapName);
			this->lstSnapshots->SelectedIndex = -1;
		}
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		PictureController^ controller = PictureController::GetInstance();
		controller->Explode();
		controller->Refresh(ckbTrace->Checked);
	}
	private: System::Void ckbMoveToBorders_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		timer1->Enabled = !timer1->Enabled;
	}
	private: System::Void ckbTrace_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		PictureController^ controller = PictureController::GetInstance();

		Color color;
		if (ckbTrace->Checked)
			color = Color::Transparent;
		else
			color = Color::Blue;
		Settings::SetSelectionPenColor(color);
	}
};
}
