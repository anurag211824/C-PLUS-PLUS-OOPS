#include <iostream>

using namespace std;
class X
{
public:
    int a;

protected:
    int b;

private:
    int c;
};
class Y : public X
{
    int q = a; // public
    int w = b; // protected
    // int e=c; //not acccesible
};
class Z : protected X
{
    int r = a; // protected
    int t = b; // protected
    // int y=c; //not acccesible
};
class A : private X
{
    int u = a; // private
    int i = b; // private
    // int o=c; //not acccesible
};

int
main()
{

    return 0;
}