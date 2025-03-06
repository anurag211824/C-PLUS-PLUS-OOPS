#include <iostream>
#include <fstream>
// open() is a function used to open a file with the objects of ofstream and ifstream
//  eof() is a function used to detect end of line in file

using namespace std;

int main()
{
    // writing a file
    /*
    ofstream out;
    out.open("samplefile2.txt");
    string a;
    cout<<"enter the contents of your file:"<<endl;
    getline(cin,a);
    out<<a;
    out.close();
    */

    
    //this will only print a single line of file
    /*
    ifstream in;
    in.open("samplefile2.txt");
    string b;
    cout << "contents of your file:" << endl;
    getline(in, b);
    cout << b;
    in.close();
    */


   // reading a entire file each line
   ifstream in;
   in.open("samplefile2.txt");
   cout<<"Displaying entire file content line by line:"<<endl;
   string b;
   while(in.eof()==0){
       getline(in,b);
       cout<<b<<endl;
   }
    
    return 0;
}