#pragma once
#include <iostream>
#include <string>
#include <fstream>

namespace TangramTetris {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
		{
			InitializeComponent();
			this->CenterToScreen();
			//
			//TODO: добавьте код конструктора
			//
		}
		void Read_Record()
		{
			/*StreamReader^ reader = File::OpenText("records.csv");
			string totalData[reader->ReadAllLines()->Length];
			totalData = reader.ReadLine()->Split(',');
			while (!reader.EndOfStream)
			{
				totalData = reader.ReadLine().Split(',');
				//dataTable.Rows.Add(totalData[0], totalData[1], totalData[2]);
			}*/

			/*string read[];
			char[] seperators = { ',' };

			StreamReader sr = new StreamReader("D:/xxx.csv");

			string data = sr.ReadLine();

			while ((data = sr.ReadLine()) != null)
			{
				read = data.Split(seperators, StringSplitOptions.RemoveEmptyEntries);
				float longitude = float.Parse(read[1]);
				float latitude = float.Parse(read[2]);
			}*/

			//std::string User_name;
			//std::string Level_name;
			//std::string Rah;
			//std::string line;
			//String^ user_name;
			//String^ level_name;
			//String^ rah;
			//int i = 0;

			//std::ifstream file("records.csv");
			//while (getline(file, line))
			//{
			//	i++;
			//}
			//file.close();

			//const int size = i;
			//std::string** mas = new std::string*[size];
			//for (int q = 0; q < size; q++)
			//	mas[q] = new std::string [3];

			//std::ifstream file1("records.csv");
			//int j = 0;
			//while (j < i)
			//{
			//	std::getline(file1, User_name, ',');
			//	user_name = gcnew System::String(User_name.c_str());
			//	//textBox1->Text += user_name + " ";
			//	//user_name = "";
			//	mas[j][0] = User_name;

			//	std::getline(file1, Level_name, ',');
			//	level_name = gcnew System::String(Level_name.c_str());
			//	//textBox1->Text += level_name + " ";
			//	//level_name = "";
			//	mas[j][1] = Level_name;

			//	std::getline(file1, Rah);
			//	rah = gcnew System::String(Rah.c_str());
			//	//textBox1->Text += rah +"\r\n";
			//	//rah = "";
			//	mas[j][2] = Rah;

			//	j++;
			//}
			//file1.close();

			//for (int w = 0; w < size; w++) {
			//	for (int e = 0; e < 3; e++) {
			//		rah = gcnew System::String(mas[w][e].c_str());
			//		listBox1->Items->Add(rah);
			//	}
			//	//listBox1->Text += "\r\n";
			//}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ListBox^ listBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm5::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, 1);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(664, 687);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(169, 36);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(304, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Таблиця Рекордів";
			// 
			// comboBox1
			// 
			this->comboBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Рівень 1 - легкий", L"Рівень 2 - легкий", L"Рівень 3 - легкий",
					L"Рівень 4 - легкий", L"Рівень 5 - легкий", L"Рівень 1 - нормальний", L"Рівень 2 - нормальний", L"Рівень 3 - нормальний", L"Рівень 4 - нормальний",
					L"Рівень 5 - нормальний", L"Босс рівень"
			});
			this->comboBox1->Location = System::Drawing::Point(164, 97);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 24);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm5::comboBox1_SelectedIndexChanged);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Black;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(164, 149);
			this->listBox1->Margin = System::Windows::Forms::Padding(4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(327, 370);
			this->listBox1->TabIndex = 3;
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(663, 684);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MyForm5";
			this->Text = L"Tangram Tetris";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e) {
		label1->Parent = pictureBox1;
		//Read_Record();
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		std::string User_name;
		std::string Level_name;
		std::string Rah;
		std::string line;
		String^ user_name;
		String^ level_name;
		String^ rah;
		int i = 0;

		std::ifstream file("records.csv");
		while (getline(file, line))
		{
			i++;
		}
		file.close();

		const int size = i;
		std::string** mas = new std::string * [size];
		for (int q = 0; q < size; q++)
			mas[q] = new std::string[3];

		std::ifstream file1("records.csv");
		int j = 0;
		while (j < i)
		{
			std::getline(file1, User_name, ',');
			user_name = gcnew System::String(User_name.c_str());
			mas[j][0] = User_name;

			std::getline(file1, Level_name, ',');
			level_name = gcnew System::String(Level_name.c_str());
			mas[j][1] = Level_name;

			std::getline(file1, Rah);
			rah = gcnew System::String(Rah.c_str());
			mas[j][2] = Rah;

			j++;
		}
		file1.close();

		int level_n = comboBox1->SelectedIndex + 1;
		int level_s = 0;
		std::string** mas_l = new std::string * [size];
		for (int q = 0; q < size; q++)
			mas_l[q] = new std::string[3];


		for (int ii = 0; ii < size; ii++)
			if (mas[ii][1][0] == 'L') {
				if (mas[ii][1][mas[ii][1].size() - 1] - 48 == level_n) {
					mas_l[level_s][0] = mas[ii][0];
					mas_l[level_s][1] = mas[ii][1];
					mas_l[level_s][2] = mas[ii][2];
					level_s++;
				}
			}
			else if (mas[ii][1][0] == 'A') {
				if (mas[ii][1][mas[ii][1].size() - 1] - 48+5 == level_n) {
					mas_l[level_s][0] = mas[ii][0];
					mas_l[level_s][1] = mas[ii][1];
					mas_l[level_s][2] = mas[ii][2];
					level_s++;
				}
			}
			else if (level_n == 11 && mas[ii][1][0] == 'F') {
				mas_l[level_s][0] = mas[ii][0];
				mas_l[level_s][1] = mas[ii][1];
				mas_l[level_s][2] = mas[ii][2];
				level_s++;
			}

		listBox1->Items->Clear();
		int min = 99999, min_i;
		std::string s;
		for (int jj = 0; jj < level_s; jj++) {
			for (int ii = 0; ii < level_s; ii++)
				if (stoi(mas_l[ii][2]) < min) {
					min_i = ii;
					min = stoi(mas_l[ii][2]);
				}
			s = mas_l[min_i][0] + " " + mas_l[min_i][2];
			rah = gcnew System::String(s.c_str());
			listBox1->Items->Add(rah);
			mas_l[min_i][2] = "99999";
			min = 99999;
		}

		for (i = 0; i < size; i++)
			delete[] mas[i];
		delete[] mas;
		for (i = 0; i < size; i++)
			delete[] mas_l[i];
		delete[] mas_l;
	}
};
}
