#include <iostream>

using namespace std;
template <class T1, class T2>
float avg(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
template <class T>
void swapp(T &a , T &b)
{
    swap( a,b);
    return;
}
int main()
{
    float a;
    a = avg(5, 2);
    cout << "the avg of these numbers is:" << a << endl;
    float b;
    b = avg(5, 2.8);
    cout << "the avg of these numbers is:" << b << endl;
    cout << endl;
    float x=2.4,y=8.4;
    swapp(x,y);
    cout<<"the vlaue of x after swap is:"<<x<<endl;
    cout<<"the vlaue of y after swap is:"<<y<<endl;
    return 0;
}