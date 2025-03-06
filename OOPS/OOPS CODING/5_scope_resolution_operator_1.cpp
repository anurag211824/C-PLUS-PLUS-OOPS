#include<iostream>

using namespace std;
class square{
    public:
    int side;
    int area(int side);
    int perimeter(int side);
};
int square::area(int side){
    return side*side;
}
int square::perimeter(int side){
    return 4*side;
}

int main(){
    square s;
    cout<<"enter the side of square:";
    cin>>s.side;
    cout<<"area of square:"<<s.area(s.side)<<endl;
    cout<<"perimeter of square:"<<s.perimeter(s.side)<<endl;
return 0;
}