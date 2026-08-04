#include<iostream>
using namespace std;



class Device{
    public:
    int deviceId;
    Device(int id): deviceId(id){
        cout<<"Device constructor called"<<endl;
    }
    void powerOn(){
        cout<<"Device "<<deviceId<<" is powered on"<<endl;
    }

};

class Phone : virtual public Device{
    public:
    Phone(int id): Device(id){
        cout<<"Phone constructor called"<<endl;
    }
    void makeCall(){
        cout<<"Making a call from Phone "<<deviceId<<endl;
    }
};
class Camera :  virtual public Device{
    public:
    Camera(int id): Device(id){
        cout<<"Camera constructor called"<<endl;
    }
    void takePhoto(){
        cout<<"Taking a photo with Camera "<<deviceId<<endl;
    }
};
class SmartPhone : public Phone, public Camera{
    public:
    SmartPhone(int id) : Device(id), Phone(id), Camera(id){
        cout<<"SmartPhone constructor called"<<endl;
    }
};
int main(){
    SmartPhone s(1);
    s.powerOn();
    s.makeCall();
    s.takePhoto();
    
    return 0;
}