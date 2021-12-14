#pragma once
#include <fstream>
using namespace std;
using namespace System::Drawing;

class check_erorr {
public:
	void Xml_Check() {
		ifstream reader("xmlfile.xml");
		if (reader.is_open())
			set_Xmli(true);
		else
			set_Xmli(false);
	}

	bool get_Xmli()
	{
		return Xml_indikator;
	}

	bool get_Picturei() {
		return Picture_indicator;
	}

	void picture_checker(int level) {
		Image^ img_back;
		if(level <=5)
			img_back = Image::FromFile("Pictures/B1.png");
		if(level > 5 && level < 11)
			img_back = Image::FromFile("Pictures/B2.png");
		else
			img_back = Image::FromFile("Pictures/B3.png");

		if (img_back)
			set_Picturei(true);
		else
			set_Picturei(false);
	}

	bool get_rah()
	{
		return rah_indikator;
	}

	void rah_checker(int rah)
	{
		if (rah == 6000)
			set_rahi(true);
		else
			set_rahi(false);
	}
private:
	bool Xml_indikator;
	bool Picture_indicator;
	bool rah_indikator;

	void set_Xmli(bool count) {
		Xml_indikator = count;
	}

	void set_Picturei(bool count) {
		Picture_indicator = count;
	}

	void set_rahi(bool count) {
		rah_indikator = count;
	}
};
