#include<iostream>
#include<fstream>
//fstream--> ifstream, ofstream
using namespace std;

  

void read(){
  ifstream file("patient.txt");
    string line;
    cin>>line;
    while(getline(file,line)){
        cout<<line<<endl;
    }
    file.close();
}


int main(){
    ofstream file("patient.txt", ios::app);//append_mode
    file<<"patient id : 102"<<endl;
    file<<"name : alisha"<<endl;
    file<<"disease : fever"<<endl;
    cout<<"Data Saved";
   
   read();
}