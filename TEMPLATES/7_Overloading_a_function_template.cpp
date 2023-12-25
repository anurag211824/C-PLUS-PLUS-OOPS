#include<iostream>

using namespace std;
void func(int a){
    cout<<"i am first func"<<a;
}
template <class T>
void func1(T a){
    cout<<"i am templised function:"<<a;
}
template <class T>
void func2(T a){
    cout<<"i am templised function"<<a;
}


int main(){
    func1(3);//exact match takes the highest priority
return 0;
}