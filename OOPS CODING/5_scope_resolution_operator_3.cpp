#include<iostream>

using namespace std;
class ABC{
    public:
    static int f(){
        cout<<"display message"<<endl;
    }
};
int main(){
    ABC::f();
return 0;
}