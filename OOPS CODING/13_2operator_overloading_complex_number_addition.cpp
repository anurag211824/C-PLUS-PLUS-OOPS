#include <iostream>
using namespace std;
class complex
{
    float real, imaginary; //data memebers in private real and imaginary

public:
    complex()
    {
        real = 0;    // deafault constructor
        imaginary = 0;
    }
    complex(float a, float b)
    {
        real = a;         //paramaterized constructor
        imaginary = b;
    }
    complex operator+(complex c2){
        complex ans;
        ans.real=real+c2.real;                //operator overloading function
        ans.imaginary=imaginary+c2.imaginary;
        return ans;
    }

    void display(){
        cout<<real<<"+"<<imaginary<<"i";  // display function to show overlaoding result
    }
};

int main()
{
    complex c1(2.3,3.6),c2(3.7,6.9);
    complex c3=c1+c2;   //using operator overloading
    c3.display();
    return 0;
}