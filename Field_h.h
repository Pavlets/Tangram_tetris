#pragma once
using namespace std;
class Field_z {
	int size;
	int* val;
public:
	Field_z(int, int*);
	~Field_z();
	int get_size_z();
	int* get_val_z();
};
inline Field_z::Field_z(int size_x, int* val_x) {
	size = size_x;
	val = new int[size];
	for (int i = 0; i < size; i++)
		val[i] = val_x[i];
}
inline Field_z::~Field_z() {
	delete[]val;
}
inline int Field_z::get_size_z() {
	return size;
}
inline int* Field_z::get_val_z() {
	return val;
}