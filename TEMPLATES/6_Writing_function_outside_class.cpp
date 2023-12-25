#include <iostream>

using namespace std;
template <class T>
class anurag
{
    T data;

public:
    anurag(T a)
    {
        this->data = a;
    }
    // void display(){  this memeber function is defined inside the class lets define it outside
    //     cout<<data;
    // }
    void display(); // memeber function declared here
};
template <class T>
void anurag<T>::display()
{
    cout << data;
}
int main()
{
    anurag<int> a(3);
    a.display();
    return 0;
}