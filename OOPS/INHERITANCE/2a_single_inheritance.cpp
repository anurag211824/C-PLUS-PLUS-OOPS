/*
SINGLE INHERITANCE:
In single inheritance a class is allowed to inherit from only one class.
that is one sub class is inherited by one base class only.
*/
/*
      base class 1

      derived class


*/

#include <iostream>

using namespace std;
class vehicle
{
    int a;

public:
    void set_a(int b)
    {
        a = b;
    }
    void return_a()
    {
        cout << a;
    }
    vehicle()
    {
        cout << "this is a vehicle" << endl;
    }
};
class car : public vehicle
{  
};

int main()
{
    car c;
    c.set_a(100);
    c.return_a();
    return 0;
}