#include<iostream>
using namespace std;
union product {
int productid;
char name[20];
float price;
}obj;


int main(){
    cout<<"enter product id:";
    cin>>obj.productid;
    cout<<obj.productid<<endl;
    cout<<"enter name of product:";
    cin>>obj.name;
    cout<<obj.name<<endl;
    cout<<"enter price of product:";
    cin>>obj.price;
    cout<<obj.price<<endl;
    
return 0;
}