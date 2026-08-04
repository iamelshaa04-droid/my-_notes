#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    int ipersonId;
    public:
    Person(): name("Unknown"), personId(0){
        cout<<"Person constructor called"<<endl;
    }
    void introduce(){
        cout<<"I am"<< name<<"with Id:"<< personId<<endl;
    }
    void setDetails(string n, int id){
        name=n;
        personId= id;
    }
};

//virtual inheritance from person
class Teacher : virtual public Person {
    //class Teacher : virtual public person
    protected:
    string staffId;
    string department;
    public:
    Teacher() : staffId("T000"),department("General"){
        cout<<"Teacher constructor called"<<endl;
    }
    void teach(){
        cout<<staffId<< "is teaching in"<< department <<endl;
    }
    void setTeacherDetails(string sid, string dept){
    staffId=sid;
    department=dep;
    }
};


class Researcher: virtual public Person{
    protected:
    string projectId;
    string researchArea;
    public:
    Researchr(): projectId("R000"), researchArea("General"){
        cout<<"Researcher constructor called"<<endl;
    }
    void research(){
        cout<< projectId<<"is researching in"<<researchArea<<endl;
    }
    void setResearcherDetails(string pid,string Area){
        projectId= pid;
        researchArea= area;
    }
    void helloWorld(){
        cout<<"Hello World. I am Researcher "<<endl;

    }
};

//professor inherits virtually from both
class Professor: public Teacher, public Researcher{
    private:
    string professorId;
    int experience;
    public:
    professor():
     professorId=pid;
     experience=exp;
}