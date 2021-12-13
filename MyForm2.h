#pragma once
#include "MyForm5.h"
#include "MyForm6.h"
#include "main.h"
#include "Sounds.h"
#include "OVS.h"

namespace TangramTetris {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Xml;
	using namespace WMPLib;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:

		

		MyForm2(String^ User_Name)
		{
			InitializeComponent();
			this->User_Name = User_Name;
			this->CenterToScreen();
			Sounds sd;
			sd.menustart();
		}
		
		private:
		String^ User_Name;
		String^ Number;
		String^ Field;
		String^ Level_Name;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;

		   int Level;

		void ReadXML(GetData* obj1)
		{
			XmlTextReader reader("xmlfile.xml");
			reader.ReadToFollowing("alldata");
			if (reader.ReadToDescendant("data"))
			{
				do
				{
					Number = reader.GetAttribute("number");
					if (Number == Level.ToString())
					{
						XmlReader^ inner = reader.ReadSubtree();

						while (inner->Read())
						{

							if ((inner->Name == "figura1") && (inner->NodeType == XmlNodeType::Element))
							{
								inner->Read();
								obj1->Set_F_1(Convert::ToInt32(inner->Value));
							}

							if ((inner->Name == "figura2") && (inner->NodeType == XmlNodeType::Element))
							{
								inner->Read();
								obj1->Set_F_2(Convert::ToInt32(inner->Value));
							}

							if ((inner->Name == "figura3") && (inner->NodeType == XmlNodeType::Element))
							{
								inner->Read();
								obj1->Set_F_3(Convert::ToInt32(inner->Value));
							}

							if ((inner->Name == "figura4") && (inner->NodeType == XmlNodeType::Element))
							{
								inner->Read();
								obj1->Set_F_4(Convert::ToInt32(inner->Value));
							}

							if ((inner->Name == "figura5") && (inner->NodeType == XmlNodeType::Element))
							{
								inner->Read();
								obj1->Set_F_5(Convert::ToInt32(inner->Value));
							}

							if ((inner->Name == "figura6") && (inner->NodeType == XmlNodeType::Element))
							{
								inner->Read();
								obj1->Set_F_6(Convert::ToInt32(inner->Value));
							}

							if ((inner->Name == "figura7") && (inner->NodeType == XmlNodeType::Element))
							{
								inner->Read();
								obj1->Set_F_7(Convert::ToInt32(inner->Value));
							}

							if ((inner->Name == "sizefield") && (inner->NodeType == XmlNodeType::Element))
							{
								inner->Read();
								obj1->Set_Field_Size(Convert::ToInt32(inner->Value));
							}

							if ((inner->Name == "field") && (inner->NodeType == XmlNodeType::Element))
							{
								inner->Read();
								Field = inner->Value;
							}

							if ((inner->Name == "namelevel") && (inner->NodeType == XmlNodeType::Element))
							{
								inner->Read();
								Level_Name = inner->Value;
							}
						}
					}
				} while (reader.ReadToNextSibling("data"));
			}
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

	protected:




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
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
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(16, 36);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 75);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Рівень 1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &MyForm2::button1_MouseEnter);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Lime;
			this->button2->Location = System::Drawing::Point(141, 36);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 75);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Рівень 2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			this->button2->MouseEnter += gcnew System::EventHandler(this, &MyForm2::button2_MouseEnter);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::Lime;
			this->button3->Location = System::Drawing::Point(265, 36);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 75);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Рівень 3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			this->button3->MouseEnter += gcnew System::EventHandler(this, &MyForm2::button3_MouseEnter);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::Lime;
			this->button4->Location = System::Drawing::Point(388, 36);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 75);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Рівень 4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			this->button4->MouseEnter += gcnew System::EventHandler(this, &MyForm2::button4_MouseEnter);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::Lime;
			this->button5->Location = System::Drawing::Point(517, 36);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 75);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Рівень 5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			this->button5->MouseEnter += gcnew System::EventHandler(this, &MyForm2::button5_MouseEnter);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(705, 170);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 75);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Рівень 5";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			this->button6->MouseEnter += gcnew System::EventHandler(this, &MyForm2::button6_MouseEnter);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(587, 170);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 75);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Рівень 4";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::button7_Click);
			this->button7->MouseEnter += gcnew System::EventHandler(this, &MyForm2::button7_MouseEnter);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(467, 170);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 75);
			this->button8->TabIndex = 12;
			this->button8->Text = L"Рівень 3";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm2::button8_Click);
			this->button8->MouseEnter += gcnew System::EventHandler(this, &MyForm2::button8_MouseEnter);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(348, 170);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 75);
			this->button9->TabIndex = 11;
			this->button9->Text = L"Рівень 2";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm2::button9_Click);
			this->button9->MouseEnter += gcnew System::EventHandler(this, &MyForm2::button9_MouseEnter);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(227, 170);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 75);
			this->button10->TabIndex = 10;
			this->button10->Text = L"Рівень 1";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm2::button10_Click);
			this->button10->MouseEnter += gcnew System::EventHandler(this, &MyForm2::button10_MouseEnter);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::Color::Red;
			this->button11->Location = System::Drawing::Point(229, 283);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(151, 74);
			this->button11->TabIndex = 15;
			this->button11->Text = L"💀";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm2::button11_Click);
			this->button11->MouseEnter += gcnew System::EventHandler(this, &MyForm2::button11_MouseEnter);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button12->Location = System::Drawing::Point(612, 359);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(192, 27);
			this->button12->TabIndex = 17;
			this->button12->Text = L"Назад";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm2::button12_Click);
			this->button12->MouseEnter += gcnew System::EventHandler(this, &MyForm2::button12_MouseEnter);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button13->Location = System::Drawing::Point(612, 303);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(192, 27);
			this->button13->TabIndex = 18;
			this->button13->Text = L"Таблиця рекордів";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm2::button13_Click);
			this->button13->MouseEnter += gcnew System::EventHandler(this, &MyForm2::button13_MouseEnter);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-3, -5);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(893, 583);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(4, 283);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(215, 123);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 20;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(625, 15);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(191, 107);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 21;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(-3, 144);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(221, 132);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 22;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(388, 283);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(216, 123);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 23;
			this->pictureBox5->TabStop = false;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(821, 401);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MyForm2";
			this->Text = L"Tangram Tetris";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm2::MyForm2_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	pictureBox2->Parent = pictureBox1;
	pictureBox3->Parent = pictureBox1;
	pictureBox4->Parent = pictureBox1;
	pictureBox5->Parent = pictureBox1;
	button1->Parent = pictureBox1;
	button2->Parent = pictureBox1;
	button3->Parent = pictureBox1;
	button4->Parent = pictureBox1;
	button5->Parent = pictureBox1;
	button6->Parent = pictureBox1;
	button7->Parent = pictureBox1;
	button8->Parent = pictureBox1;
	button9->Parent = pictureBox1;
	button10->Parent = pictureBox1;
	button11->Parent = pictureBox1;
	button12->Parent = pictureBox1;
	button13->Parent = pictureBox1;
}
	   private: System::Void MyForm2_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		   Application::Exit();
	   }
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm5^ Records = gcnew MyForm5();
	Records->Show();
}
private: System::Void button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Sounds sd;
	sd.menuin();
}
private: System::Void button2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void button5_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Sounds sd;
	sd.menuin();
}
private: System::Void button10_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Sounds sd;
	sd.menuin();
}
private: System::Void button9_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Sounds sd;
	sd.menuin();
}
private: System::Void button8_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Sounds sd;
	sd.menuin();
}
private: System::Void button7_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Sounds sd;
	sd.menuin();
}
private: System::Void button6_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Sounds sd;
	sd.menuin();
}
private: System::Void button11_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Sounds sd;
	sd.menuin();
}
private: System::Void button13_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Sounds sd;
	sd.menuin();
}
private: System::Void button12_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Sounds sd;
	sd.menuin();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	check_erorr checker;
	checker.Xml_Check();
	if (checker.get_Xmli()) {
		Image^ img_back = Image::FromFile("Pictures/B1.png");
		Level = 1;
		GetData obj;
		ReadXML(&obj);

		MyForm6^ Level1 = gcnew MyForm6(User_Name, Level_Name, img_back, obj.Get_Field_Size(), Field, obj.Get_F_1(), obj.Get_F_2(), obj.Get_F_3(), obj.Get_F_4(), obj.Get_F_5(), obj.Get_F_6(), obj.Get_F_7());
		Level1->Show();
	}
	else {
		MessageBox::Show("Не вдалось відкрити файл", "Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	check_erorr checker;
	checker.Xml_Check();
	if (checker.get_Xmli()) {
		Image^ img_back = Image::FromFile("Pictures/B1.png");
		Level = 2;
		GetData obj;
		ReadXML(&obj);

		MyForm6^ Level1 = gcnew MyForm6(User_Name, Level_Name, img_back, obj.Get_Field_Size(), Field, obj.Get_F_1(), obj.Get_F_2(), obj.Get_F_3(), obj.Get_F_4(), obj.Get_F_5(), obj.Get_F_6(), obj.Get_F_7());
		Level1->Show();
	}
	else {
		MessageBox::Show("Не вдалось відкрити файл", "Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	check_erorr checker;
	checker.Xml_Check();
	if (checker.get_Xmli()) {
		Image^ img_back = Image::FromFile("Pictures/B1.png");
		Level = 3;
		GetData obj;
		ReadXML(&obj);

		MyForm6^ Level1 = gcnew MyForm6(User_Name, Level_Name, img_back, obj.Get_Field_Size(), Field, obj.Get_F_1(), obj.Get_F_2(), obj.Get_F_3(), obj.Get_F_4(), obj.Get_F_5(), obj.Get_F_6(), obj.Get_F_7());
		Level1->Show();
	}
	else {
		MessageBox::Show("Не вдалось відкрити файл", "Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	check_erorr checker;
	checker.Xml_Check();
	if (checker.get_Xmli()) {
		Image^ img_back = Image::FromFile("Pictures/B1.png");
		Level = 4;
		GetData obj;
		ReadXML(&obj);

		MyForm6^ Level1 = gcnew MyForm6(User_Name, Level_Name, img_back, obj.Get_Field_Size(), Field, obj.Get_F_1(), obj.Get_F_2(), obj.Get_F_3(), obj.Get_F_4(), obj.Get_F_5(), obj.Get_F_6(), obj.Get_F_7());
		Level1->Show();
	}
	else {
		MessageBox::Show("Не вдалось відкрити файл", "Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	check_erorr checker;
	checker.Xml_Check();
	if (checker.get_Xmli()) {
		Image^ img_back = Image::FromFile("Pictures/B1.png");
		Level = 5;
		GetData obj;
		ReadXML(&obj);

		MyForm6^ Level1 = gcnew MyForm6(User_Name, Level_Name, img_back, obj.Get_Field_Size(), Field, obj.Get_F_1(), obj.Get_F_2(), obj.Get_F_3(), obj.Get_F_4(), obj.Get_F_5(), obj.Get_F_6(), obj.Get_F_7());
		Level1->Show();
	}
	else {
		MessageBox::Show("Не вдалось відкрити файл", "Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	check_erorr checker;
	checker.Xml_Check();
	if (checker.get_Xmli()) {
		Image^ img_back = Image::FromFile("Pictures/B2.png");
		Level = 6;
		GetData obj;
		ReadXML(&obj);

		MyForm6^ Level1 = gcnew MyForm6(User_Name, Level_Name, img_back, obj.Get_Field_Size(), Field, obj.Get_F_1(), obj.Get_F_2(), obj.Get_F_3(), obj.Get_F_4(), obj.Get_F_5(), obj.Get_F_6(), obj.Get_F_7());
		Level1->Show();
	}
	else {
		MessageBox::Show("Не вдалось відкрити файл", "Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	check_erorr checker;
	checker.Xml_Check();
	if (checker.get_Xmli()) {
		Image^ img_back = Image::FromFile("Pictures/B2.png");
		Level = 7;
		GetData obj;
		ReadXML(&obj);

		MyForm6^ Level1 = gcnew MyForm6(User_Name, Level_Name, img_back, obj.Get_Field_Size(), Field, obj.Get_F_1(), obj.Get_F_2(), obj.Get_F_3(), obj.Get_F_4(), obj.Get_F_5(), obj.Get_F_6(), obj.Get_F_7());
		Level1->Show();
	}
	else {
		MessageBox::Show("Не вдалось відкрити файл", "Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	check_erorr checker;
	checker.Xml_Check();
	if (checker.get_Xmli()) {
		Image^ img_back = Image::FromFile("Pictures/B2.png");
		Level = 8;
		GetData obj;
		ReadXML(&obj);

		MyForm6^ Level1 = gcnew MyForm6(User_Name, Level_Name, img_back, obj.Get_Field_Size(), Field, obj.Get_F_1(), obj.Get_F_2(), obj.Get_F_3(), obj.Get_F_4(), obj.Get_F_5(), obj.Get_F_6(), obj.Get_F_7());
		Level1->Show();
	}
	else {
		MessageBox::Show("Не вдалось відкрити файл", "Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	check_erorr checker;
	checker.Xml_Check();
	if (checker.get_Xmli()) {
		Image^ img_back = Image::FromFile("Pictures/B2.png");
		Level = 9;
		GetData obj;
		ReadXML(&obj);

		MyForm6^ Level1 = gcnew MyForm6(User_Name, Level_Name, img_back, obj.Get_Field_Size(), Field, obj.Get_F_1(), obj.Get_F_2(), obj.Get_F_3(), obj.Get_F_4(), obj.Get_F_5(), obj.Get_F_6(), obj.Get_F_7());
		Level1->Show();
	}
	else {
		MessageBox::Show("Не вдалось відкрити файл", "Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	check_erorr checker;
	checker.Xml_Check();
	if (checker.get_Xmli()) {
		Image^ img_back = Image::FromFile("Pictures/B2.png");
		Level = 10;
		GetData obj;
		ReadXML(&obj);

		MyForm6^ Level1 = gcnew MyForm6(User_Name, Level_Name, img_back, obj.Get_Field_Size(), Field, obj.Get_F_1(), obj.Get_F_2(), obj.Get_F_3(), obj.Get_F_4(), obj.Get_F_5(), obj.Get_F_6(), obj.Get_F_7());
		Level1->Show();
	}
	else {
		MessageBox::Show("Не вдалось відкрити файл", "Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	check_erorr checker;
	checker.Xml_Check();
	if (checker.get_Xmli()) {
		Image^ img_back = Image::FromFile("Pictures/B3.png");
		Level = 11;
		GetData obj;
		ReadXML(&obj);

		MyForm6^ Level1 = gcnew MyForm6(User_Name, Level_Name, img_back, obj.Get_Field_Size(), Field, obj.Get_F_1(), obj.Get_F_2(), obj.Get_F_3(), obj.Get_F_4(), obj.Get_F_5(), obj.Get_F_6(), obj.Get_F_7());
		Level1->Show();
	}
	else {
		MessageBox::Show("Не вдалось відкрити файл", "Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

}
};
}
