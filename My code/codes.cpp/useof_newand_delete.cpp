#include<iostream>
using namespace std;

int main()
{
    int *ptr=new int; // dynamically allocate an integer   
    *ptr=100; // assign a value to the allocated memory
    cout<<"Value stored dynamically: "<<*ptr<<endl; // output the value
    delete ptr; // deallocate the memory
    return 0;
}