#include <iostream>
using namespace std;

float volume(float length, float width, float height, string unit)
{

    float vol = (length * width * height) / 3;

    if (unit == "millimeters")
    {
        vol = vol * 1000;
        return vol;
    }
    if (unit == "centimeters")
    {
        vol = vol * 100;
        return vol;
    }
    if (unit == "kilometers")
    {
        vol = vol / 1000;
        return vol;
    }
    if (unit == "meters")
    {
        return vol;
    }
}

main()
{
    float length, width, height;

    string unit;

    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;
    cout << "Enter the height: ";
    cin >> height;
    cout << "Enter the unit: ";
    cin >> unit;

    if (unit == "millimeters")
    {
        float volu = volume(length, width, height, unit);
        cout << volu << " cubic millimeters";
    }
    if (unit == "centimeters")
    {
        float volu = volume(length, width, height, unit);
        cout << volu << " cubic centimeters";
    }
    if (unit == "kilometers")
    {
        float volu = volume(length, width, height, unit);
        cout << volu << " cubic kilometers";
    }
    if (unit == "meters")
    {
        float volu = volume(length, width, height, unit);
        cout << volu << " cubic meters";
    }
}
