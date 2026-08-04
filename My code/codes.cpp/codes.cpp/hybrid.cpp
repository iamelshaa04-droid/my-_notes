#include<iostream>
using namespace std;
class a {
    protected:
    int a;
    public:
    void get_a()
    {
        cout<<"Enter  the value of 'a':"<<endl;
        cin>>a;
    }
};
class b: public a {
    protected:
    int b;
    public:
    void get_b(){
        cout<<"Enter the value of 'b' :"<<endl;
        cin>>b;
    }
};
class c{
    protected:
    int c;
    public:
    void get_c(){
        cout<<"Enter the value of 'c' :"<<endl;
        cin>>c;
    }
};
class d: public b, public c{
    protected:
    int d;
    public:
    void mul(){
        get_a();
        get_b();
        get_c();
        cout<<"multiplication of a,b,c is:"<< a*b*c<<endl;

    }
};
int main(){
    d d1;{
    d1.mul();
    }
    return 0;
}