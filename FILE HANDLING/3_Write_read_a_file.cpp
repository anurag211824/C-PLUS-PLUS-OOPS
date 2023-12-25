#include<iostream>
#include<fstream>

using namespace std;

int main(){
//writing to the file
ofstream out("samplefile2.txt");
string a;
cout<<"enter the content for file:";
getline(cin,a);
out<<a;
out.close();

//reading from the file
ifstream in("samplefile2.txt");
string b;
cout<<"content of our file is:";
getline(in,b);
cout<<b;
in.close();
return 0;
}