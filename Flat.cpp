#include "Flat.h"

void Flat::setNumber(int number_p) {
	number = number_p;
}

void Flat::setFloor(int floor_p) {
	floor = floor_p;
}

int Flat::getFloor() const {
	return floor;
}

int Flat::getNumber() const {
	return number;
}

Flat::Flat(int number_p, int floor_p) {
	if (number_p > -1) {
		number = number_p;
	}
	else {
		exit(368); // Ошибка: данные не соответствуют 
	}

	if (floor_p > -1) {
		floor = floor_p;
	}
	else {
		exit(368);  // Ошибка: данные не соответствуют 
	}
}

Flat::Flat(const Flat& Apart) {
	number = Apart.number;
	floor = Apart.floor;
}

bool Flat::operator==(const Flat& obj) {
	return floor == obj.floor && number == obj.number;
}

bool Flat::operator<(const Flat& obj) {
	return floor < obj.floor && number < obj.number;
}

bool Flat::operator>(const Flat& obj) {
	return floor > obj.floor && number > obj.number;
}

Flat& Flat::operator=(const Flat& obj) {
	if (!(this == &obj)) {
		floor = obj.floor;
		number = obj.number;
	}
	return *this;
}