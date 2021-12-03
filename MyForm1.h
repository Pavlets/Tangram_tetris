#pragma once
#include "Sounds.h"
#include "MyForm3.h"
#include "MyForm4.h"

namespace TangramTetris {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();

			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		


		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(125, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Меню";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(123, 155);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Почати";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &MyForm1::button1_MouseEnter);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(12, 284);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 40);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Допомога";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			this->button3->MouseEnter += gcnew System::EventHandler(this, &MyForm1::button3_MouseEnter);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(237, 282);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 42);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Вихід";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			this->button4->MouseEnter += gcnew System::EventHandler(this, &MyForm1::button4_MouseEnter);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(339, 351);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->WaitOnLoad = true;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(337, 351);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm1";
			this->Text = L"Tangram Tetris";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm1::MyForm1_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	/*MyForm2^ Level_Select = gcnew MyForm2();
	Level_Select->Show();
	MyForm1::Hide();*/
	MyForm3^ Perehid = gcnew MyForm3();
	Perehid->Show();
	MyForm1::Hide();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm4^ Help = gcnew MyForm4();
	Help->Show();
}

private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	this->CenterToScreen();
	label1->Parent = pictureBox1;
	button1->Parent = pictureBox1;
	button3->Parent = pictureBox1;
	button4->Parent = pictureBox1;
}

private: System::Void button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Sounds sd;
	sd.menuin();
}
private: System::Void button3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Sounds sd;
	sd.menuin();
}
private: System::Void button4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Sounds sd;
	sd.menuin();
}
};
}
