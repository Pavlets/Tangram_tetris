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
		/*MyForm6(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}*/
		MyForm6(String^ level_name, Image^ img_back, int field_size)
		{
			InitializeComponent();
			//Обрабатываем данные
			//Или записываем их в поле
			this->level_name = level_name;
			this->field_size = field_size;
			this->img_back = img_back;
		}
		Image^ img_back;
		String^ level_name;
		bool ButtonF1Click = false;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ ButtonF1;
	private: System::Windows::Forms::Button^ ButtonF2;
	private: System::Windows::Forms::Label^ F1_count;



	private: System::Windows::Forms::Label^ label2;
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



	public:
		int field_size;
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
			this->ButtonF6_1 = (gcnew System::Windows::Forms::Button());
			this->ButtonF6_2 = (gcnew System::Windows::Forms::Button());
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->F1_count = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
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
			this->tableLayoutPanel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm6::tableLayoutPanel1_MouseMove);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox1->Controls->Add(this->ButtonF6_1);
			this->groupBox1->Controls->Add(this->ButtonF6_2);
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
			this->groupBox1->Margin = System::Windows::Forms::Padding(10);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(453, 330);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Фiгури";
			// 
			// ButtonF6_1
			// 
			this->ButtonF6_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF6_1.BackgroundImage")));
			this->ButtonF6_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF6_1->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF6_1->FlatAppearance->BorderSize = 0;
			this->ButtonF6_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF6_1->ForeColor = System::Drawing::Color::Black;
			this->ButtonF6_1->Location = System::Drawing::Point(153, 212);
			this->ButtonF6_1->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF6_1->Name = L"ButtonF6_1";
			this->ButtonF6_1->Size = System::Drawing::Size(25, 50);
			this->ButtonF6_1->TabIndex = 16;
			this->ButtonF6_1->UseVisualStyleBackColor = false;
			// 
			// ButtonF6_2
			// 
			this->ButtonF6_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF6_2.BackgroundImage")));
			this->ButtonF6_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF6_2->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF6_2->FlatAppearance->BorderSize = 0;
			this->ButtonF6_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF6_2->ForeColor = System::Drawing::Color::Black;
			this->ButtonF6_2->Location = System::Drawing::Point(178, 181);
			this->ButtonF6_2->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF6_2->Name = L"ButtonF6_2";
			this->ButtonF6_2->Size = System::Drawing::Size(25, 50);
			this->ButtonF6_2->TabIndex = 15;
			this->ButtonF6_2->UseVisualStyleBackColor = false;
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
			// 
			// ButtonF5_2
			// 
			this->ButtonF5_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF5_2.BackgroundImage")));
			this->ButtonF5_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF5_2->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF5_2->FlatAppearance->BorderSize = 0;
			this->ButtonF5_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF5_2->ForeColor = System::Drawing::Color::Black;
			this->ButtonF5_2->Location = System::Drawing::Point(48, 212);
			this->ButtonF5_2->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF5_2->Name = L"ButtonF5_2";
			this->ButtonF5_2->Size = System::Drawing::Size(25, 50);
			this->ButtonF5_2->TabIndex = 13;
			this->ButtonF5_2->UseVisualStyleBackColor = false;
			// 
			// ButtonF7_2
			// 
			this->ButtonF7_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF7_2.BackgroundImage")));
			this->ButtonF7_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF7_2->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF7_2->FlatAppearance->BorderSize = 0;
			this->ButtonF7_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF7_2->ForeColor = System::Drawing::Color::Black;
			this->ButtonF7_2->Location = System::Drawing::Point(308, 212);
			this->ButtonF7_2->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF7_2->Name = L"ButtonF7_2";
			this->ButtonF7_2->Size = System::Drawing::Size(25, 25);
			this->ButtonF7_2->TabIndex = 12;
			this->ButtonF7_2->UseVisualStyleBackColor = false;
			// 
			// ButtonF7_1
			// 
			this->ButtonF7_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF7_1.BackgroundImage")));
			this->ButtonF7_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF7_1->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF7_1->FlatAppearance->BorderSize = 0;
			this->ButtonF7_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF7_1->ForeColor = System::Drawing::Color::Black;
			this->ButtonF7_1->Location = System::Drawing::Point(283, 237);
			this->ButtonF7_1->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF7_1->Name = L"ButtonF7_1";
			this->ButtonF7_1->Size = System::Drawing::Size(75, 25);
			this->ButtonF7_1->TabIndex = 11;
			this->ButtonF7_1->UseVisualStyleBackColor = false;
			// 
			// ButtonF4_1
			// 
			this->ButtonF4_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF4_1.BackgroundImage")));
			this->ButtonF4_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF4_1->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF4_1->FlatAppearance->BorderSize = 0;
			this->ButtonF4_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF4_1->ForeColor = System::Drawing::Color::Black;
			this->ButtonF4_1->Location = System::Drawing::Point(338, 116);
			this->ButtonF4_1->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF4_1->Name = L"ButtonF4_1";
			this->ButtonF4_1->Size = System::Drawing::Size(25, 25);
			this->ButtonF4_1->TabIndex = 10;
			this->ButtonF4_1->UseVisualStyleBackColor = false;
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
			// 
			// ButtonF3_2
			// 
			this->ButtonF3_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF3_2.BackgroundImage")));
			this->ButtonF3_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF3_2->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF3_2->FlatAppearance->BorderSize = 0;
			this->ButtonF3_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF3_2->ForeColor = System::Drawing::Color::Black;
			this->ButtonF3_2->Location = System::Drawing::Point(263, 116);
			this->ButtonF3_2->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF3_2->Name = L"ButtonF3_2";
			this->ButtonF3_2->Size = System::Drawing::Size(25, 25);
			this->ButtonF3_2->TabIndex = 8;
			this->ButtonF3_2->UseVisualStyleBackColor = false;
			// 
			// ButtonF3_1
			// 
			this->ButtonF3_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF3_1.BackgroundImage")));
			this->ButtonF3_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF3_1->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF3_1->FlatAppearance->BorderSize = 0;
			this->ButtonF3_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF3_1->ForeColor = System::Drawing::Color::Black;
			this->ButtonF3_1->Location = System::Drawing::Point(238, 66);
			this->ButtonF3_1->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF3_1->Name = L"ButtonF3_1";
			this->ButtonF3_1->Size = System::Drawing::Size(25, 75);
			this->ButtonF3_1->TabIndex = 7;
			this->ButtonF3_1->UseVisualStyleBackColor = false;
			// 
			// ButtonF2
			// 
			this->ButtonF2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonF2.BackgroundImage")));
			this->ButtonF2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonF2->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->ButtonF2->FlatAppearance->BorderSize = 0;
			this->ButtonF2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonF2->ForeColor = System::Drawing::Color::Black;
			this->ButtonF2->Location = System::Drawing::Point(118, 91);
			this->ButtonF2->Margin = System::Windows::Forms::Padding(0);
			this->ButtonF2->Name = L"ButtonF2";
			this->ButtonF2->Size = System::Drawing::Size(50, 50);
			this->ButtonF2->TabIndex = 4;
			this->ButtonF2->UseVisualStyleBackColor = false;
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(628, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"X1";
			// 
			// F1_count
			// 
			this->F1_count->AutoSize = true;
			this->F1_count->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->F1_count->Location = System::Drawing::Point(561, 25);
			this->F1_count->Name = L"F1_count";
			this->F1_count->Size = System::Drawing::Size(37, 25);
			this->F1_count->TabIndex = 5;
			this->F1_count->Text = L"X1";
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(932, 461);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->F1_count);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm6";
			this->Text = L"Level 1";
			this->Load += gcnew System::EventHandler(this, &MyForm6::MyForm6_Load);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm6_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = level_name;
		BackgroundImage = img_back;

		tableLayoutPanel1->ColumnCount = field_size;
		tableLayoutPanel1->RowCount = field_size;
		for (int i = 0; i < field_size * field_size; i++) {
			Button^ button = gcnew Button();
			//button->Dock = DockStyle->Fill;
			tableLayoutPanel1->Controls->Add(button);
		}

		/*int field_of_play[yp][yp];
		ii = 0;
		for (int i = 0; i < yp; i++)
			for (int j = 0; j < yp; j++) {
				field_of_play[i][j] = ypm[ii];
				ii++;
			}
		ii = 0;
		int field_of_figures[yf][yf];
		for (int i = 0; i < yf; i++)
			for (int j = 0; j < yf; j++) {
				field_of_play[i][j] = yfm[ii];
				ii++;
			}*/
	}
	private: System::Void tableLayoutPanel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//tableLayoutPanel1.cell
		//tableLayoutPanel1.GetControlFromPosition(1, 1).BackColor = Color.CornflowerBlue;
	}
	private: System::Void ButtonF1_Click(System::Object^ sender, System::EventArgs^ e) {
		ButtonF1Click = true;
	}
};
}
