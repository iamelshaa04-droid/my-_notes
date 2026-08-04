#include<iostream>
using namespace std;
class Animal{
    public:
    void speak(){
        cout<<"This is an animal.\n";
    }
};

class Dog : protected Animal{
    public:
    void display(){
        speak();// call gareko inside the class because of protected 
    
    }
};
int main(){
    Dog d;
    {
        d.display();
    }
    
    
    return 0;
}