#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

double area();
double volume();

int main() {

    cout << "*********** FINDING VOLUME/AREA OF A CUBE/SQUARE ***********\n";

    double sqreArea = area();
    double sqreVolume = volume();

    cout << "Area of square: " << sqreArea << "cm^2\n";
    cout << "Volume of a cube: " << sqreVolume << "cm^2\n";

    cout << "**************************";
    

    return 0;
}
    double area() {
        cout << "Enter a Number To Find The Area Of A Square: ";
        double length;
        cin >> length;
        return length * length;
    }

        double volume() {
        cout << "Enter a Number To Find The Volume Of A Cube: ";
        double length;
        cin >> length;
        return length * length * length;
    }

