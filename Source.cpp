#include "Flat.h"

int main() {
	setlocale(LC_ALL, "RUS");

	Flat flat1(2, 1);
	Flat flat2(10, 3);

	flat1 > flat2 ? cout << "������ ������ �������\n" : cout << "������ ������ �������\n";

	flat1 = flat2;

	flat1 == flat2 ? cout << "��� �����\n" : cout << "��� �� �����\n";

	flat1 < flat2 ? cout << "������ ������ �������" : cout << "������ ������ �������";

	return 0;
}