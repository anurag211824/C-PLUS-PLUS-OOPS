// #include <iostream>

// using namespace std;

// class A
// {
// public:
//     int x;
//     void set_x(int a)
//     {
//         x = a;
//     }
//     int get_x()
//     {
//         return x;
//     }
// };

// class B
// {
// public:
//     int y;
//     void set_y(int b)
//     {
//         y = b;
//     }
//     int get_y()
//     {
//         return y;
//     }
// };

// class C : public A, public B
// {
// public:
//     int sum;

//     C() // Constructor to initialize sum
//     {
//         sum = A::get_x() + B::get_y();
//     }

//     void sum()
//     {
//         cout << sum;
//     }
// };

// int main()
// {
//     C obj;
//     obj.set_x(2);
//     obj.set_y(3);
//     obj.sum();

//         return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a = 1;
    int n;
    cin >> n;
     int b=n*n+1;
    vector<vector<int>> v(n);
    for (int i = n; i >= 1; i--)
    {
        vector<int> c;
        for (int j = 1; j <= 2 * i; j++)
        {
            if (j <= i)
            {
                c.push_back(a);
                a++;
            }
            else
            {
             c.push_back(b);
             b++;
            }
        
        }
        b=b-2*i+1;
        v.push_back(c);
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
