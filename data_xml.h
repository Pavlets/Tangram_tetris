using namespace System::Xml;

class GetData{
	public:
		String^ level;
		int f_1, f_2, f_3, f_4, f_5, f_6, f_7;
		int size_field;
		String^ field;
};

void XmlToData(String^level, int *f_1, int *f_2, int *f_3, int *f_4, int *f_5, int *f_6, int *f_7, int *size_field, String^ *field)
{	
	XmlTextReader reader("xmlfile.xml");
	reader.ReadToFollowing("alldata");
	if (reader.ReadToDescendant("data")){
		String^ Number;
		Number = reader.GetAttribute("number");
		if(Number == level){
			goto a;
		}
		else{
			goto b;
		}
		a:
		do {
			XmlReader^ inner = reader.ReadSubtree();

			while (inner->Read()) {
				
				if ((inner->Name == "figura1") && (inner->NodeType == XmlNodeType::Element)) {
					inner->Read();
					*f_1 = Convert::ToInt32(inner->Value);
				}
					
				if ((inner->Name == "figura2") && (inner->NodeType == XmlNodeType::Element)) {
					inner->Read();
					*f_2 = Convert::ToInt32(inner->Value);
				}
				
				if ((inner->Name == "figura3") && (inner->NodeType == XmlNodeType::Element)) {
					inner->Read();
					*f_3 = Convert::ToInt32(inner->Value);
				}
				
				if ((inner->Name == "figura4") && (inner->NodeType == XmlNodeType::Element)) {
					inner->Read();
					*f_4 = Convert::ToInt32(inner->Value);
				}
				
				if ((inner->Name == "figura5") && (inner->NodeType == XmlNodeType::Element)) {
					inner->Read();
					*f_5 = Convert::ToInt32(inner->Value);
				}
				
				if ((inner->Name == "figura6") && (inner->NodeType == XmlNodeType::Element)) {
					inner->Read();
					*f_6 = Convert::ToInt32(inner->Value);
				}
				
				if ((inner->Name == "figura7") && (inner->NodeType == XmlNodeType::Element)) {
					inner->Read();
					*f_7 = Convert::ToInt32(inner->Value);
				}
				
				if ((inner->Name == "sizefield") && (inner->NodeType == XmlNodeType::Element)) {
					inner->Read();
					*size_field = Convert::ToInt32(inner->Value);
				}
				
				if ((inner->Name == "field") && (inner->NodeType == XmlNodeType::Element)) {
					inner->Read();
					*field =inner->Value;
				}
			}
			b:
		} 		
		while (reader.ReadToNextSibling("data"));
	}
	
}
