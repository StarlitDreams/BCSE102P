/*
Q10
Create a class called "Rectangle" that has attributes "length" and "width". Write a method that calculates the area of the rectangle.


For example:

Input	Result
Rectangle r1(5, 10)
50
Rectangle r2(3, 8)
24
Rectangle r3(0, ∞)
Invalid

*/

#include<iostream>
#include<string>

using namespace std;

class Rectangle
{
    private:
    int length; 
    int width;
    
    public:
    Rectangle(int new_len,int new_wid)
    {
        length=new_len;
        width=new_wid;
    }
    int getArea()
    {
        if(length<0 || width<0)
        {
            
            return 0;
        }
        else
        {
            return length*width;
        }
    }
};

int main()
{
    int new_len,new_wid;
    cin>>new_len>>new_wid;
    Rectangle r1(new_len,new_wid);
    if(r1.getArea()==0)
    {
        cout<<"Invalid";
    }
    else
    {
        cout<<r1.getArea();
    }

    return 0;
}