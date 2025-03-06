// INHERITANCE

// Inheritance is a fundamental concept in object-oriented programming (OOP)
// that allows you to create a new class
// (derived or child class) by inheriting properties and behaviors
// (data members and member functions)
// from an existing class (base or parent class). Inheritance promotes
// code reusability and the creation
// of a hierarchical structure of classes. The
// derived class can add its own data members and member functions or
// override the ones inherited from the base class.

// #include <iostream>
// #include <string>

// using namespace std;

// // Base class (parent class)
// class Animal {
// public:
//     string name;

//     Animal(const string& _name) : name(_name) {}

//     void speak() {
//         cout << "Animal " << name << " makes a sound." << endl;
//     }
// };

// // Derived class (child class)
// class Dog : public Animal {
// public:
//     Dog(const string& _name) : Animal(_name) {}

//     void speak() {
//         cout << "Dog " << name << " barks: Woof woof!" << endl;
//     }
// };

// // Derived class (child class)
// class Cat : public Animal {
// public:
//     Cat(const string& _name) : Animal(_name) {}

//     void speak() {
//         cout << "Cat " << name << " meows: Meow meow!" << endl;
//     }
// };

// int main() {
//     Dog myDog("Buddy");
//     Cat myCat("Whiskers");

//     myDog.speak(); // Calls the speak() method of the Dog class
//     myCat.speak(); // Calls the speak() method of the Cat class

//     return 0;
// }

// a simpler program

// #include <iostream>
// using namespace std;

// // Base class (parent class)
// class Shape {
// public:
//     void display() {
//         cout << "This is a shape." << endl;
//     }
// };

// // Derived class (child class)
// class Circle : public Shape {
// public:
//     void display() {
//         cout << "This is a circle." << endl;
//     }
// };

// int main() {
//     Shape shape;
//     Circle circle;

//     shape.display(); // Calls the display() method of the Shape class
//     circle.display(); // Calls the display() method of the Circle class

//     return 0;
// }

#include <iostream>

using namespace std;
class animal
{
public:
    string name;
    animal(const string &_name) : name(_name) {}

    void speak()
    {
        cout << "Animal " << name << " makes a sound." << endl;
    }
};
class lion : public animal
{
public:
    lion(const string &_name) : animal(_name) {}
    void speak()
    {
        cout << "lion " << name << " roar" << endl;
    }
};
class cow : public animal
{
public:
    cow(const string &_name) : animal(_name) {}
    void speak()
    {
        cout << "cow " << name << " mooing" << endl;
    }
};

int main()
{
    lion l("shimva");
    cow c("amul");
    l.speak();
    c.speak();
    return 0;
}