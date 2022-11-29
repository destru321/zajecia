#ifndef POJAZDY_HPP
#define POJAZDY_HPP

#include <iostream>
#include <stdlib.h>

using namespace std;

class Pojazd {
    protected:
        string marka;
        string model;
};

class CzteroKolowe : protected Pojazd{
    protected:
        int liczbaKm;
        int czasDoSetki;
};

class DwuKolowe : protected Pojazd {
    protected:
        string typ;
};

class Auto : protected CzteroKolowe {
    protected:
        int liczbaPasazerow;

    public:
        Auto(string brand, string mode, int timeToHun, int kmNumber, int passengersNumber);

        ~Auto();

        void getAuto();
};

class Truck : protected CzteroKolowe{
    protected:
        int ladownosc;

    public:
        Truck(string brand, string mode, int timeToHun, int kmNumber, int ladownosc);

        ~Truck();

        void getTruck();
};

class Motor : protected DwuKolowe{
    protected:
        int liczbaKm;
        int czasDoSetki;

    public:
        Motor(string brand, string mode, int timeToHun, int kmNumber, string type);

        ~Motor();

        void getMotor();
};

class Hulajnoga : protected DwuKolowe{
    protected:
        int czasPracy;
        int sredniaLiczbaKm;

    public:
        Hulajnoga(string brand, string mode, int workTime, int avgKmNumber, string type);

        ~Hulajnoga();

        void getHulajnoga();
};

#endif

