#include <iostream>
using namespace std;

// Define a class called 'complex' to represent complex numbers
class complex
{
private:
    int real;
    float imaginary;

public:
    // default constructor to avoid intialization
    complex()
    {
        real = 0;
        imaginary = 0;
    }
    // paramaterized Constructor to initialize the 'complex' object
    complex(int a, float b)
    {
        real = a;
        imaginary = b;
    }

    // Function to add two complex numbers and return the answer as a new complex number
    complex add(complex x, complex y)
    {
        complex ans;
        ans.real = x.real + y.real;
        ans.imaginary = x.imaginary + y.imaginary;
        return ans;
    }

    // Function to display the complex number
    void display()
    {
        cout << real << " + " << imaginary << "i"; // Display in the form "a + bi"
    }
};

int main()
{
    // Create two complex numbers c1 and c2
    complex c1(4, 3.2);
    complex c2(1, 2.1);

    // Declare a complex number c3 (not initialized)

    complex c3;
    // Add c1 and c2 using the 'add' method and store the result in c4
    complex c4 = c3.add(c1, c2);

    // Display the result c4
    c4.display();

    return 0;
}
