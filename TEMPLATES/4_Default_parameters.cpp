#include<iostream>

using namespace std;
template<class T1=int,class T2=float,class T3=char>
class anurag{
    public:
    T1 a;
    T2 b;
    T3 c;
    anurag(T1 x,T2 y,T3 z){
        a=x;b=y;c=z;
    }
    void display(){
        cout<<"the value of a:"<<a<<endl;
        cout<<"the value of b:"<<b<<endl;
        cout<<"the value of c:"<<c<<endl;
        cout<<endl;
    }

};

int main(){
    anurag<>a1(6,2.4,'c');
    a1.display();
    anurag <float,char,int>a2(2.4,'d',2);
    a2.display();
return 0;
}