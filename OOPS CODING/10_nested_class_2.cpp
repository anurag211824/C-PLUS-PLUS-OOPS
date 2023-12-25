/* when inner class is declared in private and its objects 
are ddclared in public then how can we acess the data and the memeber function
of inner class
*/
#include<iostream>

using namespace std;
class outer
{
private:
    class inner
    {
    public:
        int x;

    public:
        void get_data()
        {
            cout << "enter x:";
            cin >> x;
        }
        void show_data()
        {
            cout << "value of x:" << x;
        }
    };
    public:
    inner i;
};



int main(){
    outer obj;
    obj.i.get_data();
    obj.i.show_data();
return 0;
}