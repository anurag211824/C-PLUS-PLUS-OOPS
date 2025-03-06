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
    // string a="this is coming from a file";
    // string a;
    // cin>>a; this will not work with multiple words and terminate after any space encountered in input
    string a;
    cout<<"enter content to put in file:";
     getline(cin,a);
    // opening a file using constructor and writing it
    ofstream out("samplefile1.txt");
    out<<a; //writing to the file(it will overwrite the previous content of file which is open)
    out.close();//closed the connection b/w  this program and file
return 0;
}