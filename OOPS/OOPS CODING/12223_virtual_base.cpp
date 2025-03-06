// #include<iostream>

// using namespace std;
// class A{
//     public:
//     void show(){
//         cout<<"hello i am from A";
//     }
// };
// class B:public virtual A{

// };
// class C:public  virtual A{

// };
// class D:public B, public C{

// };

// int main(){
//     D obj;
//     obj.show();
// return 0;
// }


// ACTUAL PROGRAM

#include <iostream>
// student----> test
// student----> sports
// test------->result
// sports----->result

using namespace std;
class student
{
protected:
    int roll_no;

public:
    void set_rollnumber(int a)
    {
        roll_no = a;
    }
    void print_rollnumber()
    {
        cout << "your roll no is:" << roll_no << endl;
    }
};
class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "you result is here" << endl;
        cout << "maths:" << maths << endl;
        cout << "physics:" << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "your PT score is:" << score << endl;
    }
};
class result : public test, public sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_rollnumber();
        print_marks();
        print_score();
        cout << "your total score is:" << total << endl;
    }
};
int main()
{
    result anurag;
    anurag.set_rollnumber(2);
    anurag.set_marks(89.4, 80.5);
    anurag.set_score(9);
    anurag.display();

    return 0;
}