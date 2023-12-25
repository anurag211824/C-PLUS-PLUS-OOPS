/*
HYBRID INHERITANCE:
Hybrid inheritance is usually a combination of more than one type of inheritance.
In below reprsentation ,we have multiple inheritance (B,C,D) and multilevel inheritance (A,B,D)
to get a hybrid inheritance 
*/

/*
      class A


      class B           class C


            class D




*/

#include <iostream>

using namespace std;
class student
{
public:
    int id;
    string name;

public:
    void getstudent()
    {
        cout << "enter student id and name:";
        cin >> id >> name;
    }
};

class marks : public student
{
protected:
    int marks_math, marks_phy, marks_chem;

public:
    void get_marks()
    {
        cout << "enter 3 subject marks:";
        cin >> marks_math >> marks_phy >> marks_chem;
    }
};
class sports
{
protected:
    int sports;

public:
    void getsports()
    {
        cout << "enter sports marks:";
        cin >> sports;
    }
};

class result : public marks, public sports
{
    int total_marks;
    float avg_marks;

public:
    void display()
    {
        cout << "name:" << name << endl;
        cout << "id:" << id << endl;
        total_marks = marks_math + marks_chem + marks_phy + sports;
        avg_marks = total_marks / 4;
        cout << "total marks=" << total_marks << endl;
        ;
        cout << "average mARKS=" << avg_marks << endl;
    }
};

int main()
{

    result res;
    res.getstudent();
    res.get_marks();
    res.getsports();
    res.display();
    return 0;
}