#pragma once
#include <iostream>
using namespace std;

namespace TangramTetris {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		int i_it = -1, j_it = -1;
		int count = 0;
		int F_1, F_2, F_3, F_4, F_5, F_6, F_7;
		int field_size;
		String^ level_name;
		String^ field;
		String^ ButtonFClick = "";
		bool FTurn = false;
		MyForm6(String^ level_name, int field_size, String^ field, int F_1,  int F_2, int F_3, int F_4, int F_5, int F_6, int F_7)
		{
			InitializeComponent();
			this->CenterToScreen();
			//Обрабатываем данные
			//Или записываем их в поле
			this->level_name = level_name;
			this->field_size = field_size;
			this->field = field;
			this->F_1 = F_1;
			this->F_2 = F_2;
			this->F_3 = F_3;
			this->F_4 = F_4;
			this->F_5 = F_5;
			this->F_6 = F_6;
			this->F_7 = F_7;
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
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

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm6::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->tableLayoutPanel1->Size = System::Drawing::Size(437, 437);
			this->tableLayoutPanel1->TabIndex = 1;
			this->tableLayoutPanel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm6::tableLayoutPanel1_MouseDown);
			this->tableLayoutPanel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm6::tableLayoutPanel1_MouseMove);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
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
			this->groupBox1->Location = System::Drawing::Point(469, 112);
			this->groupBox1->Margin = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(453, 330);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Фiгури";
			// 
			// F7_count
			// 
			this->F7_count->AutoSize = true;
			this->F7_count->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->F7_count->Location = System::Drawing::Point(391, 235);
			this->F7_count->Name = L"F7_count";
			this->F7_count->Size = System::Drawing::Size(37, 25);
			this->F7_count->TabIndex = 22;
			this->F7_count->Text = L"X1";
			// 
			// F4_count
			// 
			this->F4_count->AutoSize = true;
			this->F4_count->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->F4_count->Location = System::Drawing::Point(391, 116);
			this->F4_count->Name = L"F4_count";
			this->F4_count->Size = System::Drawing::Size(37, 25);
			this->F4_count->TabIndex = 21;
			this->F4_count->Text = L"X1";
			// 
			// F5_count
			// 
			this->F5_count->AutoSize = true;
			this->F5_count->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->F5_count->Location = System::Drawing::Point(76, 235);
			this->F5_count->Name = L"F5_count";
			this->F5_count->Size = System::Drawing::Size(37, 25);
			this->F5_count->TabIndex = 20;
			this->F5_count->Text = L"X1";
			// 
			// F6_count
			// 
			this->F6_count->AutoSize = true;
			this->F6_count->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->F6_count->Location = System::Drawing::Point(231, 235);
			this->F6_count->Name = L"F6_count";
			this->F6_count->Size = System::Drawing::Size(37, 25);
			this->F6_count->TabIndex = 19;
			this->F6_count->Text = L"X1";
			// 
			// F3_count
			// 
			this->F3_count->AutoSize = true;
			this->F3_count->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->F3_count->Location = System::Drawing::Point(291, 116);
			this->F3_count->Name = L"F3_count";
			this->F3_count->Size = System::Drawing::Size(37, 25);
			this->F3_count->TabIndex = 18;
			this->F3_count->Text = L"X1";
			// 
			// F2_count
			// 
			this->F2_count->AutoSize = true;
			this->F2_count->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->F2_count->Location = System::Drawing::Point(171, 116);
			this->F2_count->Name = L"F2_count";
			this->F2_count->Size = System::Drawing::Size(37, 25);
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
			this->ButtonF6_1->Location = System::Drawing::Point(179, 206);
			this->ButtonF6_1->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF6_1->Name = L"ButtonF6_1";
			this->ButtonF6_1->Size = System::Drawing::Size(25, 50);
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
			this->ButtonF6_2->Location = System::Drawing::Point(203, 181);
			this->ButtonF6_2->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF6_2->Name = L"ButtonF6_2";
			this->ButtonF6_2->Size = System::Drawing::Size(25, 50);
			this->ButtonF6_2->TabIndex = 15;
			this->ButtonF6_2->UseVisualStyleBackColor = false;
			this->ButtonF6_2->Click += gcnew System::EventHandler(this, &MyForm6::ButtonF6_2_Click);
			// 
			// F1_count
			// 
			this->F1_count->AutoSize = true;
			this->F1_count->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->F1_count->Location = System::Drawing::Point(51, 116);
			this->F1_count->Name = L"F1_count";
			this->F1_count->Size = System::Drawing::Size(37, 25);
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
			this->ButtonF5_1->Location = System::Drawing::Point(23, 181);
			this->ButtonF5_1->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF5_1->Name = L"ButtonF5_1";
			this->ButtonF5_1->Size = System::Drawing::Size(25, 50);
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
			this->ButtonF5_2->Location = System::Drawing::Point(48, 206);
			this->ButtonF5_2->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF5_2->Name = L"ButtonF5_2";
			this->ButtonF5_2->Size = System::Drawing::Size(25, 50);
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
			this->ButtonF7_2->Location = System::Drawing::Point(337, 207);
			this->ButtonF7_2->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF7_2->Name = L"ButtonF7_2";
			this->ButtonF7_2->Size = System::Drawing::Size(25, 25);
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
			this->ButtonF7_1->Location = System::Drawing::Point(313, 231);
			this->ButtonF7_1->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF7_1->Name = L"ButtonF7_1";
			this->ButtonF7_1->Size = System::Drawing::Size(75, 25);
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
			this->ButtonF4_1->Location = System::Drawing::Point(337, 117);
			this->ButtonF4_1->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF4_1->Name = L"ButtonF4_1";
			this->ButtonF4_1->Size = System::Drawing::Size(25, 25);
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
			this->ButtonF4_2->Location = System::Drawing::Point(363, 66);
			this->ButtonF4_2->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF4_2->Name = L"ButtonF4_2";
			this->ButtonF4_2->Size = System::Drawing::Size(25, 75);
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
			this->ButtonF3_2->Location = System::Drawing::Point(263, 117);
			this->ButtonF3_2->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF3_2->Name = L"ButtonF3_2";
			this->ButtonF3_2->Size = System::Drawing::Size(25, 25);
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
			this->ButtonF3_1->Location = System::Drawing::Point(237, 66);
			this->ButtonF3_1->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF3_1->Name = L"ButtonF3_1";
			this->ButtonF3_1->Size = System::Drawing::Size(25, 75);
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
			this->ButtonF2->Location = System::Drawing::Point(117, 91);
			this->ButtonF2->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF2->Name = L"ButtonF2";
			this->ButtonF2->Size = System::Drawing::Size(51, 50);
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
			this->ButtonF1->Location = System::Drawing::Point(23, 41);
			this->ButtonF1->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF1->Name = L"ButtonF1";
			this->ButtonF1->Size = System::Drawing::Size(25, 100);
			this->ButtonF1->TabIndex = 3;
			this->ButtonF1->UseVisualStyleBackColor = false;
			this->ButtonF1->Click += gcnew System::EventHandler(this, &MyForm6::ButtonF1_Click);
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(932, 462);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MyForm6";
			this->Text = L"Tangram Tetris";
			this->Load += gcnew System::EventHandler(this, &MyForm6::MyForm6_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm6_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = level_name;
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
						if (ButtonFClick == "F1" && !FTurn) {
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
						else if (ButtonFClick == "F1" && FTurn) {

						}
						/*if (ButtonFClick == "F1" && !FTurn) {
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
						else if (ButtonFClick == "F1" && FTurn) {

						}
						if (ButtonFClick == "F1" && !FTurn) {
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
						else if (ButtonFClick == "F1" && FTurn) {

						}
						if (ButtonFClick == "F1" && !FTurn) {
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
						else if (ButtonFClick == "F1" && FTurn) {

						}
						if (ButtonFClick == "F1" && !FTurn) {
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
						else if (ButtonFClick == "F1" && FTurn) {

						}
						if (ButtonFClick == "F1" && !FTurn) {
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
						else if (ButtonFClick == "F1" && FTurn) {

						}
						if (ButtonFClick == "F1" && !FTurn) {
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
						else if (ButtonFClick == "F1" && FTurn) {

						}*/
					}
				}
			}
	}
	private: System::Void tableLayoutPanel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			for (int i = 0; i < field_size; i++)
				for (int j = 0; j < field_size; j++) {
					if ((e->X > (327 / field_size) * i && e->X < (327 / field_size) * (i + 1)) && (e->Y > (354 / field_size) * j && e->Y < (354 / field_size) * (j + 1))) {
						if (ButtonFClick == "F1" && !FTurn) {
							if (j > 0 && j < field_size - 2) {
								if (tableLayoutPanel1->GetControlFromPosition(i, j - 1)->BackColor == Color::Aqua &&
									tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor == Color::Aqua &&
									tableLayoutPanel1->GetControlFromPosition(i, j + 1)->BackColor == Color::Aqua &&
									tableLayoutPanel1->GetControlFromPosition(i, j + 2)->BackColor == Color::Aqua)
								{
									tableLayoutPanel1->GetControlFromPosition(i, j - 1)->Cursor = Cursors::Default;
									tableLayoutPanel1->GetControlFromPosition(i, j)->Cursor = Cursors::Default;
									tableLayoutPanel1->GetControlFromPosition(i, j + 1)->Cursor = Cursors::Default;
									tableLayoutPanel1->GetControlFromPosition(i, j + 2)->Cursor = Cursors::Default;
								}
							}
						}
						else if (ButtonFClick == "F1" && FTurn) {

						}
					}
				}
		}
		else {
			if (!FTurn)
				FTurn = true;
			else
				FTurn = false;
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
};
}
