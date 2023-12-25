#include<iostream>
#include<fstream>

// The useful classes for working with files in c++ are:-
// 1.fstream (base class)
// 2.ifstrem -----> derived class
// 3.ofstream -----> derived class

// In order to work with files in c++ , we will have to open it.
// primarly ,there are two ways to open a file
// 1.using the constrructor
// 2.using the memeber function open() of the class

using namespace std;
int main(){
    // opening a file using constructor and reading it
    ifstream in("samplefile1.txt");
    string b;
    // in>>b; this will terminate after incounterd any spaces just like cin. so we use getline function
    getline(in,b);
    cout<<b;
    in.close();//closed the connection b/w  this program and file
    return 0;
}