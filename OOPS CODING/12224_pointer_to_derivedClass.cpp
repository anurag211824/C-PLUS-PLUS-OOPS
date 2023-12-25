#include<iostream>

using namespace std;
class BaseClass{
    public:
    int var_base;
    virtual void display(){
        cout<<"Displaying Base class variable var_base:"<<var_base<<endl;
    }

};
class DerivedClass:public BaseClass{
    public:
    int var_derived;
     void display(){
        cout<<"Displaying Base class variable var_base:"<<var_base<<endl;
        cout<<"Displaying Derived class variable Var_derived:"<<var_derived<<endl;
    }
};

int main(){
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer=&obj_derived; // pointinng base class pointer to derived class
    base_class_pointer->var_base=34;
    // base_class_pointer->var_derived=165; this will give error
    base_class_pointer->display(); // here the pointer of base class will call the function of base class called late binding//runtime binding
    DerivedClass *derived_class_pointer;
    derived_class_pointer=&obj_derived;
    derived_class_pointer->var_derived=98;
    derived_class_pointer->display();
return 0;
}