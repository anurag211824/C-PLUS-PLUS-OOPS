#include<iostream>

using namespace std;
class base{
    public:
    void test(){
        cout<<"test of base class"<<endl;
    }
};
class derived:public base{
    public:
    void test(){
        base::test();
        cout<<"test of derived class";
    }
};

int main(){
    derived d;
    d.test();
return 0;
}