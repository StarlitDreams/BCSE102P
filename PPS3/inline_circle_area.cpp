/*
Q2
Write a program that uses an inline function to calculate the area of a circle. 
 The function should take in the radius as a parameter and return the area. 
Test the function with the following values.
For example:
Input	Result
Radius = 5
78.54
Radius = 10
314.16
Radius= -9.5
Invalid
*/


#define _USE_MATH_DEFINES
 
#include <cmath>
#include <iostream>

using namespace std;

inline double circle_area(double radius)
{
    if(radius<0)
    {
        cout<<"Invalid";
        return 0;
    }
    else
    {
        return M_PI*radius*radius;
    }
}

int main()

{
    double radius;
    cin>>radius;
    cout<<(round(circle_area(radius)*100)/100);

    return 0;
}