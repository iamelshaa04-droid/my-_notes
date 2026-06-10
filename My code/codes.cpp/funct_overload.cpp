#include<iostream>
using namespace std;
double area(double radius)
{
    return 3.14159*radius*radius;
}
double area(double length, double width)
{
    return length*width;
}



int main()
{
    cout<<"Area of circle with radius 5: "<<area(5.0)<<endl; // calls area(double radius)
    cout<<"Area of rectangle with length 4 and width 6: "<<area(4.0, 6.0)<<endl; // calls area(double length, double width)
    return 0;
}