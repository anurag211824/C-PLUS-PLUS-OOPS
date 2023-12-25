// Encapsulation:

// Encapsulation is one of the fundamental principles of object-oriented programming (OOP).
// It refers to the bundling of data (attributes) and the methods (functions) that operate 
// on that data into a single unit called a class. Encapsulation helps in hiding the internal 
// details of how an object works and 
// exposes a limited interface to interact with the object,
// which is often referred to as a "black box."
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void setName(string newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person person;
    person.setName("Alice");
    person.setAge(30);

    cout << "Person Information:" << endl;
    person.displayInfo();

    return 0;
}
// Abstraction

// Abstraction means displaying only essential information and hiding the implementation details.
// Data abstraction refers to providing only 
// essential information about the data to 
// the outside world, hiding the background details or implementation. 


// Example Program for Abstraction:

// Abstraction is often achieved through encapsulation.
// The previous program that demonstrates encapsulation also showcases abstraction.
// The Person class abstracts away the implementation details of managing a person's name and age, 
// providing a simplified 
// interface for setting and displaying this
//  information without exposing how it is stored or processed internally.