// how can we access the data of an inner class declared in public of outer class
#include <iostream>

using namespace std;
class outer
{
public:
    class inner
    {
    private:
        int x;

    public:
        void get_data()
        {
            cout << "enter x:";
            cin >> x;
        }
        void show_data()
        {
            cout << "value of x:" << x;
        }
    };
};

int main()
{
    outer::inner obj;
    obj.get_data();
    obj.show_data();
    return 0;
}