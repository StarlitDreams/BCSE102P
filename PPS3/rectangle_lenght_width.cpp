/*
Q6
Create a class called "Rectangle" that has private attributes "length" and "width" and public methods "getArea" and "getPerimeter" that return the area and perimeter of the rectangle. Write a program that creates an object of the class and tests the methods

For example:

Input	Result
length = 4, width = 5 
20
length=5, width=10
50
length=-5, width=-10
Invalid

*/
#include <iostream>

using namespace std;


class Rectangle
{
    private:
    int lenght;
    int width;
    
    public:
    void setlenght(int new_len){lenght=new_len;}
    void setwidth(int new_wid){width=new_wid;}
    int getArea(){return lenght*width;}
    int getPerimeter(){return 2*(lenght+width);}
};

int main()
{
    int new_len,new_wid;
    Rectangle rect;
    cin>>new_len>>new_wid;
    if(new_len<0 || new_wid<0)
    {
        cout<<"Invalid";
    }
    else
    {
        rect.setlenght(new_len);
        rect.setwidth(new_wid);
        cout<<rect.getArea()<<endl;
        cout<<rect.getPerimeter()<<endl;
    }
    return 0;

}