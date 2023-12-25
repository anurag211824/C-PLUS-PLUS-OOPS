#include<iostream>

using namespace std;
template <class T1,class T2,class T3>
class student{
    public:
    T1 maths;
    T2 science;
    T3 res;
    student(T1 a,T2 b){
        this->maths=a;
        this->science=b;
    }
    void total_marks(){
        res=maths+science;
        cout<<"total marks of student:"<<res<<endl;
    }
    
};

int main(){
    student<int ,float ,float> s1(90,90.4);
    s1.total_marks();
    student<int ,int ,int> s2(99,90);
    s2.total_marks();
    student<float ,float ,float> s3(91.5,80.3);
    s3.total_marks();

return 0;
}