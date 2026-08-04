#include<iostream>
using namespace std;
int main()
{
       int scores[5]={85,90,78,92,88};

    
        cout<<"First element  "<<scores[0]<<endl;
        cout<<"third element of num is "<<scores[2]<<endl;
        cout<<"\nall scores:";
    for(int i=0;i<5;i++)
    {
        cout<<scores[i]<<" ";
    }
    cout<<endl;
    scores[1]=85;
    cout<<"Updated second score: "<<scores[1]<<endl;
    return 0;

}