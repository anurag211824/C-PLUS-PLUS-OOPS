#include<iostream>

using namespace std;
class complex{
     friend void sum();
    private:
    int a,b;

    public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    void showdata(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
    friend void sum(complex);
};
void sum(complex C){
    cout<<"sum is:"<<C.a+C.b;
}
int main(){
    complex c1,c2,c3;
    c1.setdata(3,4);
    c1.showdata();
    sum(c1);
return 0;
}