#include "Flat.h"

int main() {
	setlocale(LC_ALL, "RUS");

	Flat flat1(2, 1);
	Flat flat2(10, 3);

	flat1 > flat2 ? cout << "Первый больше второго\n" : cout << "Второй больше первого\n";

	flat1 = flat2;

	flat1 == flat2 ? cout << "Они равны\n" : cout << "Они не равны\n";

	flat1 < flat2 ? cout << "Первый меньше второго" : cout << "Второй меньше первого";

	return 0;
}