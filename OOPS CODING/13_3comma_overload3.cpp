#include <iostream>

using namespace std;
class comma
{
    int x, y;

public:
    comma()
    {   cout<<"Default contructor"<<endl;
        x = 0;  
        y = 0;
    }
    comma(int a, int b)
    {   cout<<"parameterized"<<endl;
        x = a;
        y = b;
    }
    void display()
    {   cout<<"displaying the elements "<<endl;
        cout << "x=" << x << " ";
        cout << "y=" << y << " ";
    }
    comma operator,(comma obj);
};
comma comma::operator,(comma obj)
{   cout<<"1"<<endl;
    comma temp;
    temp.x = obj.x;
    temp.y = obj.y;
    return temp;
}

int main()
{
    comma obj1(10, 20), obj2(5, 30), obj3(12, 34), obj4;
    obj4 = (obj1, obj2, obj3);
    obj4.display();

    return 0;
}