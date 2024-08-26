#include <iostream>
using namespace std;

int main()
{
    struct
    {
        string brand;
        string model;
        int year;
    } Car1, Car2;

    Car1.brand = "Mercedes";
    Car1.model = "XYZ";
    Car1.year = 2020;

    Car2.brand = "BMW";
    Car2.model = "YYZ";
    Car2.year = 2024;

    cout << Car1.brand << " " << Car1.model << " " << Car1.year << "\n";
    cout << Car2.brand << " " << Car2.model << " " << Car2.year << "\n";

    return 0;
}
