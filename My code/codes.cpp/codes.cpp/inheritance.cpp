#include<iostream>
using namespace std;
class Animal{
    public:
     virtual void speak(){
        cout<<"Animal makes a sound"<< endl;

    }
};
    class Dog: public Animal{
        public:
        void speak(){
            cout<<"Dog barks"<<endl;
        }
    };
int main(){
    Animal* a;
  Dog d;
  a = &d;
  a->speak(); 
   /* Animal obj;
    {
        obj.speak();
    }
    Dog ob1;
    {
    ob1.speak();
    }
    return 0; */
}