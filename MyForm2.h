#pragma once
#include "MyForm5.h"
#include "MyForm6.h"
#include "main.h"

namespace TangramTetris {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Xml;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		String^ level;
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(33, 32);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(184, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Легкий рівень \r\nскладності";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 94);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(912, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"_________________________________________________________________________________"
				L"________________________________";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 209);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(912, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"_________________________________________________________________________________"
				L"________________________________";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(33, 130);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(210, 58);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Середній рівень \r\nскладності";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(28, 268);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(218, 29);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Фінальний рівень";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(273, 15);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 75);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Рівень 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(405, 15);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 75);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Рівень 2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(531, 15);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 75);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Рівень 3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(655, 15);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 75);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Рівень 4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(779, 15);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 75);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Рівень 5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(779, 130);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 75);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Рівень 5";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(655, 130);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 75);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Рівень 4";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(531, 130);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 75);
			this->button8->TabIndex = 12;
			this->button8->Text = L"Рівень 3";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(405, 130);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 75);
			this->button9->TabIndex = 11;
			this->button9->Text = L"Рівень 2";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(273, 130);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 75);
			this->button10->TabIndex = 10;
			this->button10->Text = L"Рівень 1";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(495, 251);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(136, 74);
			this->button11->TabIndex = 15;
			this->button11->Text = L"💀";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 329);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(912, 17);
			this->label6->TabIndex = 16;
			this->label6->Text = L"_________________________________________________________________________________"
				L"________________________________";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(177, 373);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(157, 27);
			this->button12->TabIndex = 17;
			this->button12->Text = L"Назад";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm2::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(597, 373);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(157, 27);
			this->button13->TabIndex = 18;
			this->button13->Text = L"Таблиця рекордів";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm2::button13_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(941, 415);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm2";
			this->Text = L"Tangram Tetris";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm2::MyForm2_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm5^ Records = gcnew MyForm5();
	Records->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ level_name = "Light Level 1";
	Image^ img_back = Image::FromFile("B1.jpg");

	level = "1";
	GetData obj;
	String^ field;

	XmlTextReader reader("xmlfile.xml");
	reader.ReadToFollowing("alldata");
	if (reader.ReadToDescendant("data")) {
		String^ Number;

		do {
			Number = reader.GetAttribute("number");
			if (Number == level) {
				XmlReader^ inner = reader.ReadSubtree();

				while (inner->Read()) {

					if ((inner->Name == "figura1") && (inner->NodeType == XmlNodeType::Element)) {
						inner->Read();
						obj.F_1 = Convert::ToInt32(inner->Value);
					}

					if ((inner->Name == "figura2") && (inner->NodeType == XmlNodeType::Element)) {
						inner->Read();
						obj.F_2 = Convert::ToInt32(inner->Value);
					}

					if ((inner->Name == "figura3") && (inner->NodeType == XmlNodeType::Element)) {
						inner->Read();
						obj.F_3 = Convert::ToInt32(inner->Value);
					}

					if ((inner->Name == "figura4") && (inner->NodeType == XmlNodeType::Element)) {
						inner->Read();
						obj.F_4 = Convert::ToInt32(inner->Value);
					}

					if ((inner->Name == "figura5") && (inner->NodeType == XmlNodeType::Element)) {
						inner->Read();
						obj.F_5 = Convert::ToInt32(inner->Value);
					}

					if ((inner->Name == "figura6") && (inner->NodeType == XmlNodeType::Element)) {
						inner->Read();
						obj.F_6 = Convert::ToInt32(inner->Value);
					}

					if ((inner->Name == "figura7") && (inner->NodeType == XmlNodeType::Element)) {
						inner->Read();
						obj.F_7 = Convert::ToInt32(inner->Value);
					}

					if ((inner->Name == "sizefield") && (inner->NodeType == XmlNodeType::Element)) {
						inner->Read();
						obj.field_size = Convert::ToInt32(inner->Value);
					}

					if ((inner->Name == "field") && (inner->NodeType == XmlNodeType::Element)) {
						inner->Read();
						field = inner->Value;
					}
				}
			}
		} while (reader.ReadToNextSibling("data"));
	}


	MyForm6^ Level1 = gcnew MyForm6(level_name, img_back, obj.field_size, field, obj.F_1, obj.F_2, obj.F_3, obj.F_4, obj.F_5, obj.F_6, obj.F_7);
	Level1->Show();
}
private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
