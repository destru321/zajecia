#include <iostream>
#include <stdlib.h>
#include "Pojazdy.cpp"

using namespace std;

int main() {

    Auto au("Toyota", "Yaris", 10, 135000, 5);
    Truck tr("Renault", "Renault Premium 410 DXi Standard", 20, 600000, 25);
    Motor mot("Yamaha","DRAG STAR 700", 6, 20500, "siedzacy");
    Hulajnoga hul("Xiaomi","Mi Pro ", 8, 40, "stojacy");

    au.getAuto();
    au.~Auto();
    cout << "----------------------" << endl;
    tr.getTruck();
    tr.~Truck();
    cout << "----------------------" << endl;
    mot.getMotor();
    mot.~Motor();
    cout << "----------------------" << endl;
    hul.getHulajnoga();
    hul.~Hulajnoga();
    cout << "----------------------" << endl;


    return 0;
}