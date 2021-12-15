#pragma once
using namespace std;
class Figures {
	int figures_count;
	int* figure_count;
public:
	Figures(int*);
	~Figures();
	void figure_count_set(int, int);
	int figure_count_get(int);
};
inline Figures::Figures(int* figure_count_x) {
	figures_count = 7;
	figure_count = new int[figures_count];

	for (int i = 0; i < figures_count; i++)
		figure_count[i] = figure_count_x[i];
}
inline Figures::~Figures() {
	delete[]figure_count;
}
inline void Figures::figure_count_set(int id, int val) {
	figure_count[id] = val;
}
inline int Figures::figure_count_get(int id) {
	return figure_count[id];
}