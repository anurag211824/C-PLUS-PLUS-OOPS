#include <iostream>

using namespace std;
class add
{
public:
    int x;
    int y;
    void get_data()
    {
        cout << "enter x:";
        cin >> x;
        cout << "enter y:";
        cin >> y;
    }
    void addition(add object)
    {
        cout << x + y;
    }
};

int main()
{
    add A;
    A.get_data();
    A.addition(A);
    return 0;
}