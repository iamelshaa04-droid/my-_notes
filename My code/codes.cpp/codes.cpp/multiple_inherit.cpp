#include<iostream>
using namespace std;
class vehicle{
public:
    void speak()
    {
        cout<<"This is a Vehicle.\n";
    }
};
class flying_obj : public vehicle{
    public:
    void speak()
    {
        cout<<"This is a flying object.\n";
    }
};
class Aeroplane : public flying_obj{
    public:
    void speak(){
        cout<<"This is an aeroplane.\n";
    }
};
int main(){
   Aeroplane a;
    {
        a.speak();
    }
    vehicle v;
    {
        v.speak();
    }
    
    return 0;
}