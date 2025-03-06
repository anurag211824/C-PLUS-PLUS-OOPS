/*
MULTILEVEL INHERITANCE:
In this type of inheritance a derived class is
created from another derived class
*/
/*
             base class 2

             base class 1  (base class 1 is derived from base class 2)

             derived class
*/

#include <iostream>

using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout << "this is a vehicle" << endl;
    }
};
class fourwheeler : public vehicle
{
public:
    fourwheeler()
    {
        cout << "object with four wheels are vehicles" << endl;
    }
};
class car : public fourwheeler
{
public:
    car()
    {
        cout << "car has four wheels" << endl;
    }
};

int main()
{
    car c;
    return 0;
}