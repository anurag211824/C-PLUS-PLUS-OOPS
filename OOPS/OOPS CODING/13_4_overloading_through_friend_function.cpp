#include <iostream>

using namespace std;
class rectangle
{
    int length, breadth; // data memeber length and breadth

public:
    rectangle()
    {
        length = 0;      // default constructor
        breadth = 0;
    }
    rectangle(int a, int b)
    {
        length = a;      //paramaetrized constructor
        breadth = b;
    }
    void display()
    {
        cout << "length=" << length << " "    // function to see operator overlaoding result
             << "breadth=" << breadth;
    }
    friend rectangle operator+(rectangle, rectangle); // a friend fuction declaration for operator overloading
};

rectangle operator+(rectangle r1, rectangle r2)
{
    rectangle R;                        //friend fuction definition
    R.length = r1.length + r2.length;
    R.breadth = r1.breadth + r2.breadth;
    return R;
}

int main()
{
    rectangle r1(8, 3), r2(7, 6); // object creation
    rectangle r3 = (r1 + r2);     // doing overloading
    r3.display(); //for display result
    return 0;
}