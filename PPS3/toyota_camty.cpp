/*
Q4
Create a class called "Car" with attributes "make", "model", and "year". Create an object of the class and print out its attributes

For example:

Input	Result
Car("Toyota", "Camry", 2022)
Toyota,
 Model: Camry
 Year: 2022
Car("Honda", “Verna”, 2021)
Honda,
Model:Verna 
Year:2021
Car("Suzuki", "swift", 2020)
Suzuki, 
Model: Swift 
Year: 2020
*/

#include <iostream>

using namespace std;

class car
{
    private:
    string make;
    string model;
    int year;
    
    public:
    void setmake(string new_make){make=new_make;}
    void setmodel(string new_model){model=new_model;}
    void setyear(int new_year){year=new_year;}
    string getmake(){return make;}
    string getmodel(){return model;}
    int getyear(){return year;}
};

int main()
{
    string new_make,new_model;
    int new_year;
    car c;
    cin>>new_make>>new_model>>new_year;
    c.setmake(new_make);
    c.setmodel(new_model);
    c.setyear(new_year);
    cout<<c.getmake()<<endl;
    cout<<"Model: "<<c.getmodel()<<endl;
    cout<<"Year: "<<c.getyear()<<endl;

    return 0;
}