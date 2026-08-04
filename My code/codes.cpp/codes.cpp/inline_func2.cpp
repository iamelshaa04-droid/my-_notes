#include<iostream>
using namespace std;
inline int max(int a, int b)

{
    return (a > b) ? a : b;
}
int main()
{
    cout<< max(10,20)<<endl; // calls the inline function
    cout<< max(100,50)<<endl; // calls the inline function
    return 0;
}