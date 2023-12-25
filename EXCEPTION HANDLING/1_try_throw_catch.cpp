#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "enter a and b for division:";
    cin >> a;
    cin >> b;
    try
    {
        if (b != 0)
        {
            c = a / b;
            cout << "Division:" << c;
        }
        else
        {
            throw(b);
        }
    }
    catch (int b)
    {
        cout << "Error division by zero is not allowed";
    }
    return 0;
}