#include <iostream>
#include <stdlib.h>
#include "Pojazdy.hpp"

using namespace std;

Auto::Auto(string brand, string mode, int timeToHun, int kmNumber, int passengersNumber) {
    this -> marka = brand;
    this -> model = mode;
    this -> czasDoSetki = timeToHun;
    this -> liczbaKm = kmNumber;
    this -> liczbaPasazerow = passengersNumber;
}

Auto::~Auto() {
    this -> marka = "";
    this -> model = "";
    this -> czasDoSetki = 0;
    this -> liczbaKm = 0;
    this -> liczbaPasazerow = 0;
}

void Auto::getAuto() {
    cout << "Marka: " << this -> marka << endl;
    cout << "Model: " << this -> model << endl;
    cout << "Czas do setki: " << this -> czasDoSetki << " sekund" << endl;
    cout << "Liczba kilometrow: " << this -> liczbaKm << " kilometrow" << endl;
    cout << "Liczba pasazerow: " << this -> liczbaPasazerow << endl;
}


Truck::Truck(string brand, string mode, int timeToHun, int kmNumber, int ladownosc) {
    this -> marka = brand;
    this -> model = mode;
    this -> czasDoSetki = timeToHun;
    this -> liczbaKm = kmNumber;
    this -> ladownosc = ladownosc;
}

Truck::~Truck() {
    this -> marka = "";
    this -> model = "";
    this -> czasDoSetki = 0;
    this -> liczbaKm = 0;
    this -> ladownosc = 0;
}

void Truck::getTruck() {
    cout << "Marka: " << this -> marka << endl;
    cout << "Model: " << this -> model << endl;
    cout << "Czas do setki: " << this -> czasDoSetki << " sekund" << endl;
    cout << "Liczba kilometrow: " << this -> liczbaKm << " kilometrow" << endl;
    cout << "Ladownosc: " << this -> ladownosc << " ton" << endl;
}


Motor::Motor(string brand, string mode, int timeToHun, int kmNumber, string type) {
    this -> marka = brand;
    this -> model = mode;
    this -> czasDoSetki = timeToHun;
    this -> liczbaKm = kmNumber;
    this -> typ = type;
}

Motor::~Motor() {
    this -> marka = "";
    this -> model = "";
    this -> czasDoSetki = 0;
    this -> liczbaKm = 0;
    this -> typ = "";
}

void Motor::getMotor() {
    cout << "Marka: " << this -> marka << endl;
    cout << "Model: " << this -> model << endl;
    cout << "Czas do setki: " << this -> czasDoSetki << " sekund" << endl;
    cout << "Liczba kilometrow: " << this -> liczbaKm << " kilometrow" << endl;
    cout << "Typ: " << this -> typ << endl;
}


Hulajnoga::Hulajnoga(string brand, string mode, int workTime, int avgKmNumber, string type) {
    this -> marka = brand;
    this -> model = mode;
    this -> czasPracy = workTime;
    this -> sredniaLiczbaKm = avgKmNumber;
    this -> typ = type;
}

Hulajnoga::~Hulajnoga() {
    this -> marka = "";
    this -> model = "";
    this -> czasPracy = 0;
    this -> sredniaLiczbaKm = 0;
    this -> typ = "";
}

void Hulajnoga::getHulajnoga() {
    cout << "Marka: " << this -> marka << endl;
    cout << "Model: " << this -> model << endl;
    cout << "Czas pracy: " << this -> czasPracy << " godzin" << endl;
    cout << "Srednia liczba kilometrow: " << this -> sredniaLiczbaKm << " kilometrow" << endl;
    cout << "Typ: " << this -> typ << endl;
}

