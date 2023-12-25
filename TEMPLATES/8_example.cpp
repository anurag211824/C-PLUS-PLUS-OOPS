#include<iostream>

using namespace std;
template<class t1,class t2,class t3>
class anurag{
    public:
    t1 math;
    t2 sci;
    anurag(t1 a,t2 b){
        math=a;
        sci=b;
    }
    void add_marks(){
       t3 result=math+sci;
       cout<<result;
    }
};

int main(){
  anurag<int,int,int> a(67.4,87);
  a.add_marks();
 

return 0;
}