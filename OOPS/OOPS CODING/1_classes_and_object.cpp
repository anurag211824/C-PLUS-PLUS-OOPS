// In object-oriented programming, a class is a blueprint or template for creating objects. 
// A class defines the structure and behavior of objects that are 
// instances of that class. Objects, on the other hand, are 
// instances of classes, and they encapsulate data 
// (attributes) and methods (functions) that operate on that data.

// example with a program

// #include <iostream>
// #include <string>

// using namespace std;

// // Define a class called "Car"
// class Car {
// public:
//     // Data members (attributes)
//     string make;
//     string model;
//     int year;

//     // Member functions (methods)
//     void displayInfo() {
//         cout << "Make: " << make << endl;
//         cout << "Model: " << model << endl;
//         cout << "Year: " << year << endl;
//     }
// };

// int main() {
//     // Create objects of the "Car" class
//     Car car1;
//     Car car2;

//     // Set data for car1
//     car1.make = "Toyota";
//     car1.model = "Camry";
//     car1.year = 2022;

//     // Set data for car2
//     car2.make = "Honda";
//     car2.model = "Civic";
//     car2.year = 2021;

//     // Display information for car1 and car2
//     cout << "Car 1 Details:" << endl;
//     car1.displayInfo();

//     cout << "\nCar 2 Details:" << endl;
//     car2.displayInfo();

//     return 0;
// }


#include <iostream>
using namespace std;
class room
{
public:
    double length;
    double breadth;
    double height;
    double calculateArea()
    { // calculate area function
        return length * breadth;
    }
    double calculateVolume()
    { // calculate volume function
        return length * breadth * height;
    }
};
int main()
{
    room a;
    cout << "enter the room dimensions:"<<endl;
    cout << "enter length:";
    cin >> a.length;
    cout << "enter breadth:";
    cin >> a.breadth;
    cout << "enter height:";
    cin >> a.height;
    cout << "the area of room is:" << a.calculateArea() << endl;
    cout << "the volume of room is:" << a.calculateVolume() << endl;

    return 0;
}