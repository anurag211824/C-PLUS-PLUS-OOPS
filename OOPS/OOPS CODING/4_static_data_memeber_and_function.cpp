#include<iostream>

using namespace std;
class anurag{
    public:
static int number;
void display(){
    cout<<anurag::number;
}

};
int anurag::number=4;
int main(){
    anurag obj1,obj2,obj3;
    obj1.display();
    obj2.display();
    obj3.display();
return 0;
}