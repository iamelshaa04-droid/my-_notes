#include<iostream>
#include<fstream>
#include<vector>
//fstream--> ifstream, ofstream
using namespace std;

void update(string filename, sting id, string name, string age, string department){
    ofstream file(filename , ios::app); //append_ mode
   
    file<<id<<","<<name<<","<<age<<","<<department<<endl;
    file.close();
}
void read(string filename){
  ifstream file(filename);
    string line;
    cin>>line;
    while(getline(file,line)){
        cout<<line<<endl;
    }
}


//int main(){
  //  string filename="doctor_records.txt";
    //write(filename);
   //read(filename);
//}


#include<cstdio>

void update(string filename, string targetId, string )
