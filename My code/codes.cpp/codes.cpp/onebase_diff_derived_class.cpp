#include<iostream>
using namespace std;
class sub{
    public:
    void display(){
        cout<<"Enter the Subject."<<endl;
    }
};
 class math: public sub{
    public:
    void display(){
        cout<<"This is math."<<endl;
    }
 };
 class algebra: public sub, public math{
    public:
    void display(){
        cout<<"This is the lesson algebra  of math."<<endl;
    }
 };

 int main(){
    sub s;{
        s.display();
    }
    math m;{
        m.display();
    }
    algebra a;{
        a.display();
    }
return 0;
 }