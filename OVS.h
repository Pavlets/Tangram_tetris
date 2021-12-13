#pragma once
#include <fstream>
using namespace std;

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
private:
	bool Xml_indikator = false;

	void set_Xmli(bool count) {
		Xml_indikator = count;
	}
};
