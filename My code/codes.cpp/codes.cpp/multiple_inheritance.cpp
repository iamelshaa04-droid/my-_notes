#include<iostream>

class printer{
    public:
    void print(){
        cout<<"printing....\n";
    }
};
class scanner{
    void scan(){
        cout<<"scanning....\n";
    }
};
class allinOne: public printer,public scanner{
    public:
    void doEverything(){
        print();
        scan();
    }
};

