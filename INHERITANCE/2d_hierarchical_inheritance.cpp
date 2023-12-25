/*
HIERARCHICAL INHERITANCE
In this type of inheritance more than one subclass is inherited from a single base class
that is more than one derived class is created from single base class
*/

/*
                    class A

         class B                 class C

    class D     class E     class F     class G



*/
#include <iostream>

using namespace std;
class shape
{
public:
    float x, y;
    void set_data(float a, float b)
    {
        x = a;
        y = b;
    }
};
class rectangle : public shape
{
public:
    float area()
    {
        return x * y;
    }
};
class triangle : public shape
{
public:
    float area()
    {
        return (1 / 2.0 * (x * y));
    }
};

class square : public shape
{
public:
    float area()
    {
        return x * y;
    }
};

int main()
{
    rectangle r;
    triangle t;
    square s;
    r.set_data(2.0, 3.0);
    float rec_area=r.area();
    cout<<"area of rectangle:";
    cout<<rec_area<<endl;
    t.set_data(2.0,5.0);
    float tri_area=t.area();
    cout<<"area of triangle:";
    cout<<tri_area<<endl;
    s.set_data(3.0,3.0);
    float sq_area=s.area();
    cout<<"area of square:";
    cout<<sq_area<<endl;

    return 0;
}