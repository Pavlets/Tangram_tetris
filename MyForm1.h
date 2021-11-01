#pragma once
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"

namespace TangramTetris {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(77, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Меню";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(61, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 44);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Старт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(61, 114);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 44);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Налаштування";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(61, 175);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 44);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Допомога";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(61, 236);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 44);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Вихід";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(234, 308);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm1";
			this->Text = L"Tangram Tetris";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm1::MyForm1_FormClosed);
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
	MyForm2^ Level_Select = gcnew MyForm2();
	Level_Select->Show();
	MyForm1::Hide();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm3^ Settings = gcnew MyForm3();
	Settings->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm4^ Help = gcnew MyForm4();
	Help->Show();
}
};
}
