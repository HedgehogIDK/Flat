#pragma once
#include <iostream>

using namespace std;

class Flat {
    int number;
    int floor;

public:
    //Êîíñòðóêòîðû 
    Flat() :Flat(0, 0) {}
    explicit Flat(int number_p) :Flat(number_p, 0) {}
    Flat(int number_p, int floor_p);

    //Êîíñòðóêòîð êîïèðîâàíèÿ
    Flat(const Flat& Apart);

    //Ìåòîäû è àêññåñîðû
    void setNumber(int number_p);
    void setFloor(int floor_p);
    int getFloor() const;
    int getNumber() const;

    bool operator==(Flat& obj);
    bool operator<(Flat& obj);
    bool operator>(Flat& obj);
    Flat operator=(Flat& obj);
};

