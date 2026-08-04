#include<iostream>
using namespace std;

void display(char c='*',int count=3){
for(int i=1;i<=count;++i)
{
        cout<<c;
    }
    cout<<endl;
}
int main()
{
    int count=5;

    cout<<"no arguments passeds: "<<endl;
    display(); // uses default parameters
    cout<<"first argument passed:"<<endl;
    display('#'); // uses custom parameters
cout<<"both argument passed:"<<endl;
    display('$',count); // uses custom parameters
    return 0;
}