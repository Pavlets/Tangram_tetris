#include "MyForm2.h"
//#include "MyForm4.h"
#include "MyForm.h"

inline System::Void TangramTetris::MyForm2::button12_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ Menu = gcnew MyForm1(User_Name);
	Menu->Show();
	MyForm2::Hide();
}
