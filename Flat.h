#pragma once
#include <iostream>

using namespace std;

class Flat {
    int number;
    int floor;

public:
    //Конструкторы 
    Flat() :Flat(0, 0) {}
    explicit Flat(int number_p) :Flat(number_p, 0) {}
    Flat(int number_p, int floor_p);

    //Конструктор копирования 
    Flat(const Flat& Apart);

    //Аксессоры
    void setNumber(int number_p);
    void setFloor(int floor_p);
    int getFloor() const;
    int getNumber() const;

    //Перегрузка
    bool operator==(const Flat& obj);
    bool operator<(const Flat& obj);
    bool operator>(const Flat& obj);
    Flat& operator=(const Flat& obj);
};

