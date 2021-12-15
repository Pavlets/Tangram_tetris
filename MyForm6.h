#pragma once
#include <iostream>
#include "windows.h"
#include "OVS.h"
#include "Field_h.h"
#include "Figures_h.h"
using namespace std;

namespace TangramTetris {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm6
	/// </summary>
	
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		int i_it = -1, j_it = -1;
		int count = 0;
		int F_1, F_2, F_3, F_4, F_5, F_6, F_7;
		int stF_1, stF_2, stF_3, stF_4, stF_5, stF_6, stF_7;
		int field_size;
		String^ level_name;
		String^ field;
		String^ ButtonFClick = "";
		bool level_is_finish;
		int rah = 0;
		int F1Turn = 0, F3Turn = 0, F4Turn = 0, F5Turn = 0, F6Turn = 0, F7Turn = 0;
		String^ User_Name;
	private: System::Windows::Forms::Timer^ timer1;
	public:
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Button^ button1;
	public:
		Image^ img_back;

		void Write_Record(String^ User_Name, String^ Level_Name, int Rah)
		{
			String^ Data = User_Name + "," + Level_Name + "," + Rah.ToString();
			File::AppendAllText("records.csv", Data + "\n");
		}

		MyForm6(String^ User_Name, String^ level_name, Image^ img_back, int field_size, String^ field, int F_1,  int F_2, int F_3, int F_4, int F_5, int F_6, int F_7)
		{
			InitializeComponent();
			this->CenterToScreen();
			//Обрабатываем данные
			//Или записываем их в поле
			this->level_name = level_name;
			this->img_back = img_back;
			this->field_size = field_size;
			this->field = field;
			this->stF_1 = this->F_1 = F_1;
			this->stF_2 = this->F_2 = F_2;
			this->stF_3 = this->F_3 = F_3;
			this->stF_4 = this->F_4 = F_4;
			this->stF_5 = this->F_5 = F_5;
			this->stF_6 = this->F_6 = F_6;
			this->stF_7 = this->F_7 = F_7;
			this->User_Name = User_Name;

			timer1->Interval = 1000;
		}

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	//private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ ButtonF1;
	private: System::Windows::Forms::Button^ ButtonF2;
	private: System::Windows::Forms::Label^ F1_count;


	private: System::Windows::Forms::Button^ ButtonF3_2;

	private: System::Windows::Forms::Button^ ButtonF3_1;
	private: System::Windows::Forms::Button^ ButtonF7_1;

	private: System::Windows::Forms::Button^ ButtonF4_1;
	private: System::Windows::Forms::Button^ ButtonF4_2;
	private: System::Windows::Forms::Button^ ButtonF6_1;
	private: System::Windows::Forms::Button^ ButtonF6_2;
	private: System::Windows::Forms::Button^ ButtonF5_1;
	private: System::Windows::Forms::Button^ ButtonF5_2;
	private: System::Windows::Forms::Button^ ButtonF7_2;
	private: System::Windows::Forms::Label^ F7_count;

	private: System::Windows::Forms::Label^ F4_count;
	private: System::Windows::Forms::Label^ F5_count;
	private: System::Windows::Forms::Label^ F6_count;

	private: System::Windows::Forms::Label^ F3_count;

	private: System::Windows::Forms::Label^ F2_count;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm6::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->F7_count = (gcnew System::Windows::Forms::Label());
			this->F4_count = (gcnew System::Windows::Forms::Label());
			this->F5_count = (gcnew System::Windows::Forms::Label());
			this->F6_count = (gcnew System::Windows::Forms::Label());
			this->F3_count = (gcnew System::Windows::Forms::Label());
			this->F2_count = (gcnew System::Windows::Forms::Label());
			this->ButtonF6_1 = (gcnew System::Windows::Forms::Button());
			this->ButtonF6_2 = (gcnew System::Windows::Forms::Button());
			this->F1_count = (gcnew System::Windows::Forms::Label());
			this->ButtonF5_1 = (gcnew System::Windows::Forms::Button());
			this->ButtonF5_2 = (gcnew System::Windows::Forms::Button());
			this->ButtonF7_2 = (gcnew System::Windows::Forms::Button());
			this->ButtonF7_1 = (gcnew System::Windows::Forms::Button());
			this->ButtonF4_1 = (gcnew System::Windows::Forms::Button());
			this->ButtonF4_2 = (gcnew System::Windows::Forms::Button());
			this->ButtonF3_2 = (gcnew System::Windows::Forms::Button());
			this->ButtonF3_1 = (gcnew System::Windows::Forms::Button());
			this->ButtonF2 = (gcnew System::Windows::Forms::Button());
			this->ButtonF1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Black;
			this->tableLayoutPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 10;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(9, 10);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 10;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(328, 355);
			this->tableLayoutPanel1->TabIndex = 1;
			this->tableLayoutPanel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm6::tableLayoutPanel1_MouseDown);
			this->tableLayoutPanel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm6::tableLayoutPanel1_MouseMove);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->F7_count);
			this->groupBox1->Controls->Add(this->F4_count);
			this->groupBox1->Controls->Add(this->F5_count);
			this->groupBox1->Controls->Add(this->F6_count);
			this->groupBox1->Controls->Add(this->F3_count);
			this->groupBox1->Controls->Add(this->F2_count);
			this->groupBox1->Controls->Add(this->ButtonF6_1);
			this->groupBox1->Controls->Add(this->ButtonF6_2);
			this->groupBox1->Controls->Add(this->F1_count);
			this->groupBox1->Controls->Add(this->ButtonF5_1);
			this->groupBox1->Controls->Add(this->ButtonF5_2);
			this->groupBox1->Controls->Add(this->ButtonF7_2);
			this->groupBox1->Controls->Add(this->ButtonF7_1);
			this->groupBox1->Controls->Add(this->ButtonF4_1);
			this->groupBox1->Controls->Add(this->ButtonF4_2);
			this->groupBox1->Controls->Add(this->ButtonF3_2);
			this->groupBox1->Controls->Add(this->ButtonF3_1);
			this->groupBox1->Controls->Add(this->ButtonF2);
			this->groupBox1->Controls->Add(this->ButtonF1);
			this->groupBox1->Location = System::Drawing::Point(352, 91);
			this->groupBox1->Margin = System::Windows::Forms::Padding(8);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(340, 268);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Фiгури";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Constantia", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(124, 219);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 46);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Рестарт";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::button1_Click);
			// 
			// F7_count
			// 
			this->F7_count->AutoSize = true;
			this->F7_count->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->F7_count->Location = System::Drawing::Point(293, 191);
			this->F7_count->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->F7_count->Name = L"F7_count";
			this->F7_count->Size = System::Drawing::Size(30, 21);
			this->F7_count->TabIndex = 22;
			this->F7_count->Text = L"X1";
			// 
			// F4_count
			// 
			this->F4_count->AutoSize = true;
			this->F4_count->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->F4_count->Location = System::Drawing::Point(293, 94);
			this->F4_count->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->F4_count->Name = L"F4_count";
			this->F4_count->Size = System::Drawing::Size(30, 21);
			this->F4_count->TabIndex = 21;
			this->F4_count->Text = L"X1";
			// 
			// F5_count
			// 
			this->F5_count->AutoSize = true;
			this->F5_count->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->F5_count->Location = System::Drawing::Point(57, 191);
			this->F5_count->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->F5_count->Name = L"F5_count";
			this->F5_count->Size = System::Drawing::Size(30, 21);
			this->F5_count->TabIndex = 20;
			this->F5_count->Text = L"X1";
			// 
			// F6_count
			// 
			this->F6_count->AutoSize = true;
			this->F6_count->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->F6_count->Location = System::Drawing::Point(173, 191);
			this->F6_count->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->F6_count->Name = L"F6_count";
			this->F6_count->Size = System::Drawing::Size(30, 21);
			this->F6_count->TabIndex = 19;
			this->F6_count->Text = L"X1";
			// 
			// F3_count
			// 
			this->F3_count->AutoSize = true;
			this->F3_count->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->F3_count->Location = System::Drawing::Point(218, 94);
			this->F3_count->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->F3_count->Name = L"F3_count";
			this->F3_count->Size = System::Drawing::Size(30, 21);
			this->F3_count->TabIndex = 18;
			this->F3_count->Text = L"X1";
			// 
			// F2_count
			// 
			this->F2_count->AutoSize = true;
			this->F2_count->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->F2_count->Location = System::Drawing::Point(128, 94);
			this->F2_count->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->F2_count->Name = L"F2_count";
			this->F2_count->Size = System::Drawing::Size(30, 21);
			this->F2_count->TabIndex = 17;
			this->F2_count->Text = L"X1";
			// 
			// ButtonF6_1
			// 
			this->ButtonF6_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF6_1.BackgroundImage")));
			this->ButtonF6_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF6_1->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF6_1->FlatAppearance->BorderSize = 0;
			this->ButtonF6_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF6_1->ForeColor = System::Drawing::Color::Black;
			this->ButtonF6_1->Location = System::Drawing::Point(134, 167);
			this->ButtonF6_1->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF6_1->Name = L"ButtonF6_1";
			this->ButtonF6_1->Size = System::Drawing::Size(19, 41);
			this->ButtonF6_1->TabIndex = 16;
			this->ButtonF6_1->UseVisualStyleBackColor = false;
			this->ButtonF6_1->Click += gcnew System::EventHandler(this, &MyForm6::ButtonF6_1_Click);
			// 
			// ButtonF6_2
			// 
			this->ButtonF6_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF6_2.BackgroundImage")));
			this->ButtonF6_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF6_2->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF6_2->FlatAppearance->BorderSize = 0;
			this->ButtonF6_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF6_2->ForeColor = System::Drawing::Color::Black;
			this->ButtonF6_2->Location = System::Drawing::Point(152, 147);
			this->ButtonF6_2->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF6_2->Name = L"ButtonF6_2";
			this->ButtonF6_2->Size = System::Drawing::Size(19, 41);
			this->ButtonF6_2->TabIndex = 15;
			this->ButtonF6_2->UseVisualStyleBackColor = false;
			this->ButtonF6_2->Click += gcnew System::EventHandler(this, &MyForm6::ButtonF6_2_Click);
			// 
			// F1_count
			// 
			this->F1_count->AutoSize = true;
			this->F1_count->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->F1_count->Location = System::Drawing::Point(38, 94);
			this->F1_count->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->F1_count->Name = L"F1_count";
			this->F1_count->Size = System::Drawing::Size(30, 21);
			this->F1_count->TabIndex = 5;
			this->F1_count->Text = L"X1";
			// 
			// ButtonF5_1
			// 
			this->ButtonF5_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF5_1.BackgroundImage")));
			this->ButtonF5_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF5_1->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF5_1->FlatAppearance->BorderSize = 0;
			this->ButtonF5_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF5_1->ForeColor = System::Drawing::Color::Black;
			this->ButtonF5_1->Location = System::Drawing::Point(17, 147);
			this->ButtonF5_1->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF5_1->Name = L"ButtonF5_1";
			this->ButtonF5_1->Size = System::Drawing::Size(19, 41);
			this->ButtonF5_1->TabIndex = 14;
			this->ButtonF5_1->UseVisualStyleBackColor = false;
			this->ButtonF5_1->Click += gcnew System::EventHandler(this, &MyForm6::ButtonF5_1_Click);
			// 
			// ButtonF5_2
			// 
			this->ButtonF5_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF5_2.BackgroundImage")));
			this->ButtonF5_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF5_2->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF5_2->FlatAppearance->BorderSize = 0;
			this->ButtonF5_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF5_2->ForeColor = System::Drawing::Color::Black;
			this->ButtonF5_2->Location = System::Drawing::Point(36, 167);
			this->ButtonF5_2->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF5_2->Name = L"ButtonF5_2";
			this->ButtonF5_2->Size = System::Drawing::Size(19, 41);
			this->ButtonF5_2->TabIndex = 13;
			this->ButtonF5_2->UseVisualStyleBackColor = false;
			this->ButtonF5_2->Click += gcnew System::EventHandler(this, &MyForm6::ButtonF5_2_Click);
			// 
			// ButtonF7_2
			// 
			this->ButtonF7_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF7_2.BackgroundImage")));
			this->ButtonF7_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF7_2->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF7_2->FlatAppearance->BorderSize = 0;
			this->ButtonF7_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF7_2->ForeColor = System::Drawing::Color::Black;
			this->ButtonF7_2->Location = System::Drawing::Point(253, 168);
			this->ButtonF7_2->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF7_2->Name = L"ButtonF7_2";
			this->ButtonF7_2->Size = System::Drawing::Size(19, 20);
			this->ButtonF7_2->TabIndex = 12;
			this->ButtonF7_2->UseVisualStyleBackColor = false;
			this->ButtonF7_2->Click += gcnew System::EventHandler(this, &MyForm6::ButtonF7_2_Click);
			// 
			// ButtonF7_1
			// 
			this->ButtonF7_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF7_1.BackgroundImage")));
			this->ButtonF7_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF7_1->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF7_1->FlatAppearance->BorderSize = 0;
			this->ButtonF7_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF7_1->ForeColor = System::Drawing::Color::Black;
			this->ButtonF7_1->Location = System::Drawing::Point(235, 188);
			this->ButtonF7_1->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF7_1->Name = L"ButtonF7_1";
			this->ButtonF7_1->Size = System::Drawing::Size(56, 20);
			this->ButtonF7_1->TabIndex = 11;
			this->ButtonF7_1->UseVisualStyleBackColor = false;
			this->ButtonF7_1->Click += gcnew System::EventHandler(this, &MyForm6::ButtonF7_1_Click);
			// 
			// ButtonF4_1
			// 
			this->ButtonF4_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF4_1.BackgroundImage")));
			this->ButtonF4_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF4_1->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF4_1->FlatAppearance->BorderSize = 0;
			this->ButtonF4_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF4_1->ForeColor = System::Drawing::Color::Black;
			this->ButtonF4_1->Location = System::Drawing::Point(253, 95);
			this->ButtonF4_1->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF4_1->Name = L"ButtonF4_1";
			this->ButtonF4_1->Size = System::Drawing::Size(19, 20);
			this->ButtonF4_1->TabIndex = 10;
			this->ButtonF4_1->UseVisualStyleBackColor = false;
			this->ButtonF4_1->Click += gcnew System::EventHandler(this, &MyForm6::ButtonF4_1_Click);
			// 
			// ButtonF4_2
			// 
			this->ButtonF4_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF4_2.BackgroundImage")));
			this->ButtonF4_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF4_2->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF4_2->FlatAppearance->BorderSize = 0;
			this->ButtonF4_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF4_2->ForeColor = System::Drawing::Color::Black;
			this->ButtonF4_2->Location = System::Drawing::Point(272, 54);
			this->ButtonF4_2->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF4_2->Name = L"ButtonF4_2";
			this->ButtonF4_2->Size = System::Drawing::Size(19, 61);
			this->ButtonF4_2->TabIndex = 9;
			this->ButtonF4_2->UseVisualStyleBackColor = false;
			this->ButtonF4_2->Click += gcnew System::EventHandler(this, &MyForm6::ButtonF4_2_Click);
			// 
			// ButtonF3_2
			// 
			this->ButtonF3_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF3_2.BackgroundImage")));
			this->ButtonF3_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF3_2->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF3_2->FlatAppearance->BorderSize = 0;
			this->ButtonF3_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF3_2->ForeColor = System::Drawing::Color::Black;
			this->ButtonF3_2->Location = System::Drawing::Point(197, 95);
			this->ButtonF3_2->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF3_2->Name = L"ButtonF3_2";
			this->ButtonF3_2->Size = System::Drawing::Size(19, 20);
			this->ButtonF3_2->TabIndex = 8;
			this->ButtonF3_2->UseVisualStyleBackColor = false;
			this->ButtonF3_2->Click += gcnew System::EventHandler(this, &MyForm6::ButtonF3_2_Click);
			// 
			// ButtonF3_1
			// 
			this->ButtonF3_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF3_1.BackgroundImage")));
			this->ButtonF3_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF3_1->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF3_1->FlatAppearance->BorderSize = 0;
			this->ButtonF3_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF3_1->ForeColor = System::Drawing::Color::Black;
			this->ButtonF3_1->Location = System::Drawing::Point(178, 54);
			this->ButtonF3_1->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF3_1->Name = L"ButtonF3_1";
			this->ButtonF3_1->Size = System::Drawing::Size(19, 61);
			this->ButtonF3_1->TabIndex = 7;
			this->ButtonF3_1->UseVisualStyleBackColor = false;
			this->ButtonF3_1->Click += gcnew System::EventHandler(this, &MyForm6::ButtonF3_1_Click);
			// 
			// ButtonF2
			// 
			this->ButtonF2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF2.BackgroundImage")));
			this->ButtonF2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF2->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF2->FlatAppearance->BorderSize = 0;
			this->ButtonF2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF2->ForeColor = System::Drawing::Color::Black;
			this->ButtonF2->Location = System::Drawing::Point(88, 74);
			this->ButtonF2->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF2->Name = L"ButtonF2";
			this->ButtonF2->Size = System::Drawing::Size(38, 41);
			this->ButtonF2->TabIndex = 4;
			this->ButtonF2->UseVisualStyleBackColor = false;
			this->ButtonF2->Click += gcnew System::EventHandler(this, &MyForm6::ButtonF2_Click);
			// 
			// ButtonF1
			// 
			this->ButtonF1->BackColor = System::Drawing::Color::Red;
			this->ButtonF1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF1.BackgroundImage")));
			this->ButtonF1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF1->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF1->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->ButtonF1->FlatAppearance->BorderSize = 0;
			this->ButtonF1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->ButtonF1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->ButtonF1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF1->ForeColor = System::Drawing::Color::Black;
			this->ButtonF1->Location = System::Drawing::Point(17, 33);
			this->ButtonF1->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF1->Name = L"ButtonF1";
			this->ButtonF1->Size = System::Drawing::Size(19, 81);
			this->ButtonF1->TabIndex = 3;
			this->ButtonF1->UseVisualStyleBackColor = false;
			this->ButtonF1->Click += gcnew System::EventHandler(this, &MyForm6::ButtonF1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Lime;
			this->label1->Location = System::Drawing::Point(362, 21);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 46);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Рахунок:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm6::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(537, 23);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label2->Size = System::Drawing::Size(39, 46);
			this->label2->TabIndex = 4;
			this->label2->Text = L"0";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm6::label2_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm6::timer1_Tick);
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(699, 375);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm6";
			this->Text = L"Tangram Tetris";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm6::MyForm6_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm6::MyForm6_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm6_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = level_name;
		this->BackgroundImage = img_back;
		F1_count->Text = "X" + F_1;
		if (F_1 == 0) {
			ButtonF1->Enabled = false;
			ButtonF1->BackgroundImage = Image::FromFile("Pictures/F1_b.png");
		}
		F2_count->Text = "X" + F_2;
		if (F_2 == 0) {
			ButtonF2->Enabled = false;
			ButtonF2->BackgroundImage = Image::FromFile("Pictures/F2_b.png");
		}
		F3_count->Text = "X" + F_3;
		if (F_3 == 0) {
			ButtonF3_1->Enabled = false;
			ButtonF3_1->BackgroundImage = Image::FromFile("Pictures/F3.1_b.png");
			ButtonF3_2->Enabled = false;
			ButtonF3_2->BackgroundImage = Image::FromFile("Pictures/F3.2_b.png");
		}
		F4_count->Text = "X" + F_4;
		if (F_4 == 0) {
			ButtonF4_1->Enabled = false;
			ButtonF4_1->BackgroundImage = Image::FromFile("Pictures/F4.1_b.png");
			ButtonF4_2->Enabled = false;
			ButtonF4_2->BackgroundImage = Image::FromFile("Pictures/F4.2_b.png");
		}
		F5_count->Text = "X" + F_5;
		if (F_5 == 0) {
			ButtonF5_1->Enabled = false;
			ButtonF5_1->BackgroundImage = Image::FromFile("Pictures/F5.1_b.png");
			ButtonF5_2->Enabled = false;
			ButtonF5_2->BackgroundImage = Image::FromFile("Pictures/F5.2_b.png");
		}
		F6_count->Text = "X" + F_6;
		if (F_6 == 0) {
			ButtonF6_1->Enabled = false;
			ButtonF6_1->BackgroundImage = Image::FromFile("Pictures/F6.1_b.png");
			ButtonF6_2->Enabled = false;
			ButtonF6_2->BackgroundImage = Image::FromFile("Pictures/F6.2_b.png");
		}
		F7_count->Text = "X" + F_7;
		if (F_7 == 0) {
			ButtonF7_1->Enabled = false;
			ButtonF7_1->BackgroundImage = Image::FromFile("Pictures/F7.1_b.png");
			ButtonF7_2->Enabled = false;
			ButtonF7_2->BackgroundImage = Image::FromFile("Pictures/F7.2_b.png");
		}

		tableLayoutPanel1->ColumnCount = field_size;
		tableLayoutPanel1->RowCount = field_size;
		for (int i = 0; i < field_size; i++)
			for (int j = 0; j < field_size; j++) {
				PictureBox^ picture = gcnew PictureBox();
				picture->Dock = DockStyle::Fill;
				picture->Enabled = false;
				tableLayoutPanel1->Controls->Add(picture, j, i);
				if (field[i * field_size + j + 1] == '1') {
					tableLayoutPanel1->GetControlFromPosition(j, i)->BackColor = Color::White;
					tableLayoutPanel1->GetControlFromPosition(j, i)->Cursor = Cursors::Cross;
				}
				else if (field[i * field_size + j + 1] == '0')
					tableLayoutPanel1->GetControlFromPosition(j, i)->BackColor = Color::Gray;
				else if (field[i * field_size + j + 1] == '2')
					tableLayoutPanel1->GetControlFromPosition(j, i)->BackColor = Color::Black;
			}
	}
	private: System::Void tableLayoutPanel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		for (int i = 0; i < field_size; i++) 
			for (int j = 0; j < field_size; j++) {
				if ((e->X > (327 / field_size) * i && e->X < (327 / field_size) * (i + 1)) && (e->Y > (354 / field_size) * j && e->Y < (354 / field_size) * (j + 1))) {
					if (i != i_it || j != j_it) {
						for (int i = 0; i < field_size; i++)
							for (int j = 0; j < field_size; j++)
								if (tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor == Cursors::Cross)
									tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::White;
						i_it = i;
						j_it = j;
					}
					else {
						if (ButtonFClick == "F1") {
							if (F1Turn == 0) {
								if (j > 0 && j < field_size - 2) {
									if (tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 2)->BackColor == Color::White)
									{
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor = Color::Aqua;
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::Aqua;
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor = Color::Aqua;
										tableLayoutPanel1->GetControlFromPosition(i, j + 2)->BackColor = Color::Aqua;
									}
								}
							}
							else
								if (i > 0 && i < field_size - 2)
									if (tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i + 2, j)->BackColor == Color::White)
									{
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor = Color::Aqua;
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::Aqua;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor = Color::Aqua;
										tableLayoutPanel1->GetControlFromPosition(i + 2, j)->BackColor = Color::Aqua;
									}
						}



						if (ButtonFClick == "F2") {
							if (j > 0 && i > 0) {
								if (tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::White &&
									tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
									tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::White &&
									tableLayoutPanel1->GetControlFromPosition(i - 1, j - 1)->BackColor == Color::White)
								{
									tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor = Color::Yellow;
									tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::Yellow;
									tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor = Color::Yellow;
									tableLayoutPanel1->GetControlFromPosition(i - 1, j - 1)->BackColor = Color::Yellow;
								}
							}
						}



						if (ButtonFClick == "F3") {
							if (F3Turn == 0) {
								if (j > 1 && i < field_size - 1) {
									if (tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 2)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::White)
									{
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor = Color::Orange;
										tableLayoutPanel1->GetControlFromPosition(i, j - 2)->BackColor = Color::Orange;
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::Orange;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor = Color::Orange;
									}
								}
							}
							else if (F3Turn == 1) {
								if (i < field_size - 2 && j < field_size - 1) {
									if (tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i + 2, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::White)
									{
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor = Color::Orange;
										tableLayoutPanel1->GetControlFromPosition(i + 2, j)->BackColor = Color::Orange;
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::Orange;
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor = Color::Orange;
									}
								}
							}
							else if (F3Turn == 2) {
								if (j < field_size - 2 && i>0) {
									if (tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 2)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::White)
									{
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor = Color::Orange;
										tableLayoutPanel1->GetControlFromPosition(i, j + 2)->BackColor = Color::Orange;
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::Orange;
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor = Color::Orange;
									}
								}
							}
							else if (F3Turn == 3) {
								if (i > 1 && j > 0) {
									if (tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i - 2, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::White)
									{
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor = Color::Orange;
										tableLayoutPanel1->GetControlFromPosition(i - 2, j)->BackColor = Color::Orange;
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::Orange;
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor = Color::Orange;
									}
								}
							}
						}



						if (ButtonFClick == "F4") {
							if (F4Turn == 0) {
								if (j > 1 && i > 0) {
									if (tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 2)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::White)
									{
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor = Color::BlueViolet;
										tableLayoutPanel1->GetControlFromPosition(i, j - 2)->BackColor = Color::BlueViolet;
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::BlueViolet;
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor = Color::BlueViolet;
									}
								}
							}
							else if (F4Turn == 1) {
								if (i < field_size - 2 && j >0) {
									if (tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i + 2, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::White)
									{
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor = Color::BlueViolet;
										tableLayoutPanel1->GetControlFromPosition(i + 2, j)->BackColor = Color::BlueViolet;
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::BlueViolet;
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor = Color::BlueViolet;
									}
								}
							}
							else if (F4Turn == 2) {
								if (j < field_size - 2 && i < field_size - 1) {
									if (tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 2)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::White)
									{
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor = Color::BlueViolet;
										tableLayoutPanel1->GetControlFromPosition(i, j + 2)->BackColor = Color::BlueViolet;
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::BlueViolet;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor = Color::BlueViolet;
									}
								}
							}
							else if (F4Turn == 3) {
								if (i > 1 && j < field_size - 1) {
									if (tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i - 2, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::White)
									{
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor = Color::BlueViolet;
										tableLayoutPanel1->GetControlFromPosition(i - 2, j)->BackColor = Color::BlueViolet;
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::BlueViolet;
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor = Color::BlueViolet;
									}
								}
							}
						}



						if (ButtonFClick == "F5") {
							if (F5Turn == 0) {
								if (j > 0 && j < field_size - 1 && i < field_size - 1) {
									if (tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j + 1)->BackColor == Color::White)
									{
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor = Color::LawnGreen;
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::LawnGreen;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor = Color::LawnGreen;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j + 1)->BackColor = Color::LawnGreen;
									}
								}
							}
							else if (F5Turn == 1) {
								if (i > 0 && j < field_size - 1 && i < field_size - 1) {
									if (tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i - 1, j + 1)->BackColor == Color::White)
									{
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor = Color::LawnGreen;
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::LawnGreen;
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor = Color::LawnGreen;
										tableLayoutPanel1->GetControlFromPosition(i - 1, j + 1)->BackColor = Color::LawnGreen;
									}
								}
							}
						}



						if (ButtonFClick == "F6") {
							if (F6Turn == 0) {
								if (j > 0 && j < field_size - 1 && i < field_size - 1) {
									if (tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j - 1)->BackColor == Color::White)
									{
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor = Color::PaleVioletRed;
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::PaleVioletRed;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor = Color::PaleVioletRed;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j - 1)->BackColor = Color::PaleVioletRed;
									}
								}
							}
							else if (F6Turn == 1) {
								if (i > 0 && j < field_size - 1 && i < field_size - 1) {
									if (tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j + 1)->BackColor == Color::White)
									{
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor = Color::PaleVioletRed;
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::PaleVioletRed;
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor = Color::PaleVioletRed;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j + 1)->BackColor = Color::PaleVioletRed;
									}
								}
							}
						}



						if (ButtonFClick == "F7") {
							if (F7Turn == 0) {
								if (i > 0 && i < field_size - 1 && j > 0) {
									if (tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::White)
									{
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor = Color::HotPink;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor = Color::HotPink;
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::HotPink;
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor = Color::HotPink;
									}
								}
							}
							else if (F7Turn == 1) {
								if (j < field_size - 1 && i < field_size - 1 && j > 0) {
									if (tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::White)
									{
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor = Color::HotPink;
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor = Color::HotPink;
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::HotPink;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor = Color::HotPink;
									}
								}
							}
							else if (F7Turn == 2) {
								if (i > 0 && i < field_size - 1 && j < field_size - 1) {
									if (tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::White)
									{
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor = Color::HotPink;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor = Color::HotPink;
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::HotPink;
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor = Color::HotPink;
									}
								}
							}
							else if (F7Turn == 3) {
								if (j < field_size - 1 && i>0 && j > 0) {
									if (tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::White &&
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::White)
									{
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor = Color::HotPink;
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor = Color::HotPink;
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = Color::HotPink;
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor = Color::HotPink;
									}
								}
							}
						}
					}
				}
			}
	}
	private: System::Void tableLayoutPanel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		bool placed = false;
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			for (int i = 0; i < field_size; i++)
				for (int j = 0; j < field_size; j++) {
					if ((e->X > (327 / field_size) * i && e->X < (327 / field_size) * (i + 1)) && (e->Y > (354 / field_size) * j && e->Y < (354 / field_size) * (j + 1))) {
						if (ButtonFClick == "F1") {
							if (F1Turn == 0) {
								if (j > 0 && j < field_size - 2)
									if (tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::Aqua &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::Aqua &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::Aqua &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 2)->BackColor == Color::Aqua &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 2)->Cursor != Cursors::Default)
									{
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j + 2)->Cursor = Cursors::Default;
										placed = true;
									}
							}
							else {
								if (i > 0 && i < field_size - 2)
									if (tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::Aqua &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::Aqua &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::Aqua &&
										tableLayoutPanel1->GetControlFromPosition(i + 2, j)->BackColor == Color::Aqua &&
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i + 2, j)->Cursor != Cursors::Default)
									{
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i + 2, j)->Cursor = Cursors::Default;
										placed = true;
									}
							}
							if (placed) {
								F_1--;
								F1_count->Text = "X" + F_1;
								if (F_1 == 0) {
									ButtonF1->Enabled = false;
									ButtonF1->BackgroundImage = Image::FromFile("Pictures/F1_b.png");
									ButtonFClick = "";
								}
							}
						}



						if (ButtonFClick == "F2") {
							if (j > 0 && i > 0)
								if (tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::Yellow &&
									tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::Yellow &&
									tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::Yellow &&
									tableLayoutPanel1->GetControlFromPosition(i - 1, j - 1)->BackColor == Color::Yellow &&
									tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor != Cursors::Default &&
									tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
									tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor != Cursors::Default &&
									tableLayoutPanel1->GetControlFromPosition(i - 1, j - 1)->Cursor != Cursors::Default)
								{
									tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor = Cursors::Default;
									tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
									tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor = Cursors::Default;
									tableLayoutPanel1->GetControlFromPosition(i - 1, j - 1)->Cursor = Cursors::Default;
									placed = true;
								}
							if (placed) {
								F_2--;
								F2_count->Text = "X" + F_2;
								if (F_2 == 0) {
									ButtonF2->Enabled = false;
									ButtonF2->BackgroundImage = Image::FromFile("Pictures/F2_b.png");
									ButtonFClick = "";
								}
							}
						}



						if (ButtonFClick == "F3") {
							if (F3Turn == 0) {
								if (j > 1 && i < field_size - 1)
									if (tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::Orange &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 2)->BackColor == Color::Orange &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::Orange &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::Orange &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 2)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor != Cursors::Default)
									{
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j - 2)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor = Cursors::Default;
										placed = true;
									}
							}
							else if (F3Turn == 1) {
								if (i < field_size - 2 && j < field_size - 1)
									if (tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::Orange &&
										tableLayoutPanel1->GetControlFromPosition(i + 2, j)->BackColor == Color::Orange &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::Orange &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::Orange &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i + 2, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor != Cursors::Default)
									{
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i + 2, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor = Cursors::Default;
										placed = true;
									}
							}
							else if (F3Turn == 2) {
								if (j < field_size - 2 && i>0)
									if (tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::Orange &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 2)->BackColor == Color::Orange &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::Orange &&
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::Orange &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 2)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor != Cursors::Default)
									{
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j + 2)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor = Cursors::Default;
										placed = true;
									}
							}
							else if (F3Turn == 3) {
								if (i > 1 && j > 0)
									if (tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::Orange &&
										tableLayoutPanel1->GetControlFromPosition(i - 2, j)->BackColor == Color::Orange &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::Orange &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::Orange &&
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i - 2, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor != Cursors::Default)
									{
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i - 2, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor = Cursors::Default;
										placed = true;
									}
							}
							if (placed) {
								F_3--;
								F3_count->Text = "X" + F_3;
								if (F_3 == 0) {
									ButtonF3_1->Enabled = false;
									ButtonF3_1->BackgroundImage = Image::FromFile("Pictures/F3.1_b.png");
									ButtonF3_2->Enabled = false;
									ButtonF3_2->BackgroundImage = Image::FromFile("Pictures/F3.2_b.png");
									ButtonFClick = "";
								}
							}
						}



						if (ButtonFClick == "F4") {
							if (F4Turn == 0) {
								if (j > 1 && i > 0)
									if (tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::BlueViolet &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 2)->BackColor == Color::BlueViolet &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::BlueViolet &&
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::BlueViolet &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 2)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor != Cursors::Default)
									{
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j - 2)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor = Cursors::Default;
										placed = true;
									}
							}
							if (F4Turn == 1) {
								if (i < field_size - 2 && j >0)
									if (tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::BlueViolet &&
										tableLayoutPanel1->GetControlFromPosition(i + 2, j)->BackColor == Color::BlueViolet &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::BlueViolet &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::BlueViolet &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i + 2, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor != Cursors::Default)
									{
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i + 2, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor = Cursors::Default;
										placed = true;
									}
							}
							if (F4Turn == 2) {
								if (j < field_size - 2 && i < field_size - 1)
									if (tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::BlueViolet &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 2)->BackColor == Color::BlueViolet &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::BlueViolet &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::BlueViolet &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 2)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor != Cursors::Default)
									{
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j + 2)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor = Cursors::Default;
										placed = true;
									}
							}
							if (F4Turn == 3) {
								if (i > 1 && j < field_size - 1) {
									if (tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::BlueViolet &&
										tableLayoutPanel1->GetControlFromPosition(i - 2, j)->BackColor == Color::BlueViolet &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::BlueViolet &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::BlueViolet &&
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i - 2, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor != Cursors::Default)
									{
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i - 2, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor = Cursors::Default;
										placed = true;
									}
								}
							}
							if (placed) {
								F_4--;
								F4_count->Text = "X" + F_4;
								if (F_4 == 0) {
									ButtonF4_1->Enabled = false;
									ButtonF4_1->BackgroundImage = Image::FromFile("Pictures/F4.1_b.png");
									ButtonF4_2->Enabled = false;
									ButtonF4_2->BackgroundImage = Image::FromFile("Pictures/F4.2_b.png");
									ButtonFClick = "";
								}
							}
						}



						if (ButtonFClick == "F5") {
							if (F5Turn == 0) {
								if (j > 0 && j < field_size - 1 && i < field_size - 1)
									if (tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::LawnGreen &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::LawnGreen &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::LawnGreen &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j + 1)->BackColor == Color::LawnGreen &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j + 1)->Cursor != Cursors::Default)
									{
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j + 1)->Cursor = Cursors::Default;
										placed = true;
									}
							}
							else if (F5Turn == 1) {
								if (i > 0 && j < field_size - 1 && i < field_size - 1)
									if (tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::LawnGreen &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::LawnGreen &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::LawnGreen &&
										tableLayoutPanel1->GetControlFromPosition(i - 1, j + 1)->BackColor == Color::LawnGreen &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i - 1, j + 1)->Cursor != Cursors::Default)
									{
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i - 1, j + 1)->Cursor = Cursors::Default;
										placed = true;
									}
							}
							if (placed) {
								F_5--;
								F5_count->Text = "X" + F_5;
								if (F_5 == 0) {
									ButtonF5_1->Enabled = false;
									ButtonF5_1->BackgroundImage = Image::FromFile("Pictures/F5.1_b.png");
									ButtonF5_2->Enabled = false;
									ButtonF5_2->BackgroundImage = Image::FromFile("Pictures/F5.2_b.png");
									ButtonFClick = "";
								}
							}
						}



						if (ButtonFClick == "F6") {
							if (F6Turn == 0) {
								if (j > 0 && j < field_size - 1 && i < field_size - 1)
									if (tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::PaleVioletRed &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::PaleVioletRed &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::PaleVioletRed &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j - 1)->BackColor == Color::PaleVioletRed &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j - 1)->Cursor != Cursors::Default)
									{
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j - 1)->Cursor = Cursors::Default;
										placed = true;
									}
							}
							else if (F6Turn == 1) {
								if (i > 0 && j < field_size - 1 && i < field_size - 1)
									if (tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::PaleVioletRed &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::PaleVioletRed &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::PaleVioletRed &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j + 1)->BackColor == Color::PaleVioletRed &&
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j + 1)->Cursor != Cursors::Default)
									{
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j + 1)->Cursor = Cursors::Default;
										placed = true;
									}
							}
							if (placed) {
								F_6--;
								F6_count->Text = "X" + F_6;
								if (F_6 == 0) {
									ButtonF6_1->Enabled = false;
									ButtonF6_1->BackgroundImage = Image::FromFile("Pictures/F6.1_b.png");
									ButtonF6_2->Enabled = false;
									ButtonF6_2->BackgroundImage = Image::FromFile("Pictures/F6.2_b.png");
									ButtonFClick = "";
								}
							}
						}


						if (ButtonFClick == "F7") {
							if (F7Turn == 0) {
								if (i > 0 && i < field_size - 1 && j > 0)
									if (tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::HotPink &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::HotPink &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::HotPink &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::HotPink &&
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor != Cursors::Default)
									{
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor = Cursors::Default;
										placed = true;
									}
							}
							else if (F7Turn == 1) {
								if (j < field_size - 1 && i < field_size - 1 && j>0)
									if (tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::HotPink &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::HotPink &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::HotPink &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::HotPink &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor != Cursors::Default)
									{
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor = Cursors::Default;
										placed = true;
									}
							}
							else if (F7Turn == 2) {
								if (i > 0 && i < field_size - 1 && j < field_size - 1)
									if (tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::HotPink &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->BackColor == Color::HotPink &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::HotPink &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::HotPink &&
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor != Cursors::Default)
									{
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i + 1, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor = Cursors::Default;
										placed = true;
									}
							}
							else if (F7Turn == 3) {
								if (j < field_size - 1 && i >0 && j > 0)
									if (tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::HotPink &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::HotPink &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::HotPink &&
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->BackColor == Color::HotPink &&
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor != Cursors::Default &&
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor != Cursors::Default)
									{
										tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
										tableLayoutPanel1->GetControlFromPosition(i - 1, j)->Cursor = Cursors::Default;
										placed = true;
									}
							}
							if (placed) {
								F_7--;
								F7_count->Text = "X" + F_7;
								if (F_7 == 0) {
									ButtonF7_1->Enabled = false;
									ButtonF7_1->BackgroundImage = Image::FromFile("Pictures/F7.1_b.png");
									ButtonF7_2->Enabled = false;
									ButtonF7_2->BackgroundImage = Image::FromFile("Pictures/F7.2_b.png");
									ButtonFClick = "";
								}
							}
						}
					}
				}
				for (int i = 0; i < field_size; i++)
					for (int j = 0; j < field_size; j++)
						if (tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor == Cursors::Default)
							count++;
				if (count == field_size * field_size) {
					timer1->Enabled = false;
					MessageBox::Show("Ви пройшли рiвень! Ваш рахунок:" + rah, "Перемога!", MessageBoxButtons::OK, MessageBoxIcon::None);
					Write_Record(User_Name, level_name, rah);
					this->Close();
				}
				count = 0;
		}
		else {
			if (ButtonFClick == "F1") {
				F1Turn++;
				if (F1Turn == 2)
					F1Turn = 0;
			}
			else if (ButtonFClick == "F3") {
				F3Turn++;
				if (F3Turn == 4)
					F3Turn = 0;
			}
			else if (ButtonFClick == "F4") {
				F4Turn++;
				if (F4Turn == 4)
					F4Turn = 0;
			}
			else if (ButtonFClick == "F5") {
				F5Turn++;
				if (F5Turn == 2)
					F5Turn = 0;
			}
			else if (ButtonFClick == "F6") {
				F6Turn++;
				if (F6Turn == 2)
					F6Turn = 0;
			}
			else if (ButtonFClick == "F7") {
				F7Turn++;
				if (F7Turn == 4)
					F7Turn = 0;
			}
		}
	}
	private: System::Void ButtonF1_Click(System::Object^ sender, System::EventArgs^ e) {
		ButtonFClick = "F1";
	}
	private: System::Void ButtonF2_Click(System::Object^ sender, System::EventArgs^ e) {
		ButtonFClick = "F2";
	}
	private: System::Void ButtonF3_1_Click(System::Object^ sender, System::EventArgs^ e) {
		ButtonFClick = "F3";
	}
	private: System::Void ButtonF3_2_Click(System::Object^ sender, System::EventArgs^ e) {
		ButtonFClick = "F3";
	}
	private: System::Void ButtonF4_1_Click(System::Object^ sender, System::EventArgs^ e) {
		ButtonFClick = "F4";
	}
	private: System::Void ButtonF4_2_Click(System::Object^ sender, System::EventArgs^ e) {
		ButtonFClick = "F4";
	}
	private: System::Void ButtonF5_1_Click(System::Object^ sender, System::EventArgs^ e) {
		ButtonFClick = "F5";
	}
	private: System::Void ButtonF5_2_Click(System::Object^ sender, System::EventArgs^ e) {
		ButtonFClick = "F5";
	}
	private: System::Void ButtonF6_1_Click(System::Object^ sender, System::EventArgs^ e) {
		ButtonFClick = "F6";
	}
	private: System::Void ButtonF6_2_Click(System::Object^ sender, System::EventArgs^ e) {
		ButtonFClick = "F6";
	}
	private: System::Void ButtonF7_1_Click(System::Object^ sender, System::EventArgs^ e) {
		ButtonFClick = "F7";
	}
	private: System::Void ButtonF7_2_Click(System::Object^ sender, System::EventArgs^ e) {
		ButtonFClick = "F7";
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		rah += 10;
		check_erorr checker;
		checker.rah_checker(rah);
		if (checker.get_rah()) {
			exit(0);
		}
		label2->Text = rah.ToString();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	F_1 = stF_1;
	F_2 = stF_2;
	F_3 = stF_3;
	F_4 = stF_4;
	F_5 = stF_5;
	F_6 = stF_6;
	F_7 = stF_7;
	F1_count->Text = "X" + F_1;
	if (F_1 == 0) {
		ButtonF1->Enabled = false;
		ButtonF1->BackgroundImage = Image::FromFile("Pictures/F1_b.png");
	}
	else {
		ButtonF1->Enabled = true;
		ButtonF1->BackgroundImage = Image::FromFile("Pictures/F1.png");
	}
	F2_count->Text = "X" + F_2;
	if (F_2 == 0) {
		ButtonF2->Enabled = false;
		ButtonF2->BackgroundImage = Image::FromFile("Pictures/F2_b.png");
	}
	else {
		ButtonF2->Enabled = true;
		ButtonF2->BackgroundImage = Image::FromFile("Pictures/F2.png");
	}
	F3_count->Text = "X" + F_3;
	if (F_3 == 0) {
		ButtonF3_1->Enabled = false;
		ButtonF3_1->BackgroundImage = Image::FromFile("Pictures/F3.1_b.png");
		ButtonF3_2->Enabled = false;
		ButtonF3_2->BackgroundImage = Image::FromFile("Pictures/F3.2_b.png");
	}
	else {
		ButtonF3_1->Enabled = true;
		ButtonF3_2->Enabled = true;
		ButtonF3_1->BackgroundImage = Image::FromFile("Pictures/F3.1.png");
		ButtonF3_2->BackgroundImage = Image::FromFile("Pictures/F3.2.png");
	}
	F4_count->Text = "X" + F_4;
	if (F_4 == 0) {
		ButtonF4_1->Enabled = false;
		ButtonF4_1->BackgroundImage = Image::FromFile("Pictures/F4.1_b.png");
		ButtonF4_2->Enabled = false;
		ButtonF4_2->BackgroundImage = Image::FromFile("Pictures/F4.2_b.png");
	}
	else {
		ButtonF4_1->Enabled = true;
		ButtonF4_2->Enabled = true;
		ButtonF4_1->BackgroundImage = Image::FromFile("Pictures/F4.1.png");
		ButtonF4_2->BackgroundImage = Image::FromFile("Pictures/F4.2.png");
	}
	F5_count->Text = "X" + F_5;
	if (F_5 == 0) {
		ButtonF5_1->Enabled = false;
		ButtonF5_1->BackgroundImage = Image::FromFile("Pictures/F5.1_b.png");
		ButtonF5_2->Enabled = false;
		ButtonF5_2->BackgroundImage = Image::FromFile("Pictures/F5.2_b.png");
	}
	else {
		ButtonF5_1->Enabled = true;
		ButtonF5_2->Enabled = true;
		ButtonF5_1->BackgroundImage = Image::FromFile("Pictures/F5.1.png");
		ButtonF5_2->BackgroundImage = Image::FromFile("Pictures/F5.2.png");
	}
	F6_count->Text = "X" + F_6;
	if (F_6 == 0) {
		ButtonF6_1->Enabled = false;
		ButtonF6_1->BackgroundImage = Image::FromFile("Pictures/F6.1_b.png");
		ButtonF6_2->Enabled = false;
		ButtonF6_2->BackgroundImage = Image::FromFile("Pictures/F6.2_b.png");
	}
	else {
		ButtonF6_1->Enabled = true;
		ButtonF6_2->Enabled = true;
		ButtonF6_1->BackgroundImage = Image::FromFile("Pictures/F6.1.png");
		ButtonF6_2->BackgroundImage = Image::FromFile("Pictures/F6.2.png");
	}
	F7_count->Text = "X" + F_7;
	if (F_7 == 0) {
		ButtonF7_1->Enabled = false;
		ButtonF7_1->BackgroundImage = Image::FromFile("Pictures/F7.1_b.png");
		ButtonF7_2->Enabled = false;
		ButtonF7_2->BackgroundImage = Image::FromFile("Pictures/F7.2_b.png");
	}
	else {
		ButtonF7_1->Enabled = true;
		ButtonF7_2->Enabled = true;
		ButtonF7_1->BackgroundImage = Image::FromFile("Pictures/F7.1.png");
		ButtonF7_2->BackgroundImage = Image::FromFile("Pictures/F7.2.png");
	}
	for (int i = 0; i < field_size; i++)
		for (int j = 0; j < field_size; j++) {
			if (field[i * field_size + j + 1] == '1') {
				tableLayoutPanel1->GetControlFromPosition(j, i)->BackColor = Color::White;
				tableLayoutPanel1->GetControlFromPosition(j, i)->Cursor = Cursors::Cross;
			}
			else if (field[i * field_size + j + 1] == '0')
				tableLayoutPanel1->GetControlFromPosition(j, i)->BackColor = Color::Gray;
			else if (field[i * field_size + j + 1] == '2')
				tableLayoutPanel1->GetControlFromPosition(j, i)->BackColor = Color::Black;
		}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm6_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	
}
};
}
