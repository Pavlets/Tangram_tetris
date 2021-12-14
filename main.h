#pragma once

class GetData {
public:
	 GetData() { }

	~GetData() { }

	void Set_F_1(int f_1) { F_1 = f_1; }
	 int Get_F_1() { return F_1; }

	void Set_F_2(int f_2) { F_2 = f_2; }
	 int Get_F_2() { return F_2; }

	void Set_F_3(int f_3) { F_3 = f_3; }
	 int Get_F_3() { return F_3; }

	void Set_F_4(int f_4) { F_4 = f_4; }
	 int Get_F_4() { return F_4; }

	void Set_F_5(int f_5) { F_5 = f_5; }
	 int Get_F_5() { return F_5; }

	void Set_F_6(int f_6) { F_6 = f_6; }
	 int Get_F_6() { return F_6; }

	void Set_F_7(int f_7) { F_7 = f_7; }
	 int Get_F_7() { return F_7; }

	void Set_Field_Size(int field_size) { Field_Size = field_size; }
	 int Get_Field_Size() { return Field_Size; }

private:
	int F_1, F_2, F_3, F_4, F_5, F_6, F_7;
	int Field_Size;
};