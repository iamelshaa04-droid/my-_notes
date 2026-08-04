#include<iostream>
using namespace std;
inline int square(int x)
{
    return x*x;
}
int main()
{
   cout<<square(5)<<endl;
   cout<<square(6+1)<< endl;
   
     // calls the inline function
    return 0;
}