#include<iostream>
using namespace std;
class shape{
    public:
    int x;
    int y;
    shape(int a, int b){
     this -> x=a;
     this -> y=b;
     
};
    virtual void area(int a, int b)=0;


};
class rectangle: public shape{
    public:
    rectangle(int a, int b): shape(a,b){
        cout<<"Rectangle constructor called"<<endl;
    }
    void area( int x , int y){
        cout<<"Area of rectangle is: "<<x*y<<endl;
    }
};
class circle: public shape{
    public:
    circle(int r){
        this->radius=r;
    };
    private:
    int radius;
    void area(int r){
        cout<<"Area of circle is: "<<3.14*r*r<<endl;
    }

};
int main(){
    
    rectangle r(5,10);
    r.area(5,10);
    circle c(5);
    c.area(5);
    return 0;
}