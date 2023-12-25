/*
MULTIPLE INHERITANCE:
Multiple inheritance is a feature of C++ where a class can inherit from more than one base class.
That is one subclass is inherited from more than one base class
*/

/*
base class 1              base class 2

             derived class

*/
#include <iostream>

using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout << "this is vehicle" << endl;
    }
};
class fourwheeler
{
public:
    fourwheeler()
    {
        cout << "this is a fourwheeler" << endl;
    }
};
class car : public vehicle, public fourwheeler
{
};

int main()
{
    car c;
    return 0;
}