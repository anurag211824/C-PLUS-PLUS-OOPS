#include <iostream>

using namespace std;
int x = 20;
int main()
{
    int x = 10;
    cout << "the value of x:" << x << endl;
    cout << "the vlaue of x:" << ::x << endl;
    return 0;
}