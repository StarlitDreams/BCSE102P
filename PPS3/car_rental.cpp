/*
Q12
A car rental company wants to keep track of its fleet of cars.
 Each car has a make, model, year, and rental price. 
 The company wants to be able to calculate the total rental price of 
 all its cars and also find the car with the highest rental price.
  Design a program using OOPs and the "this" pointer to implement this scenario. 
  Create a new car object and verify that all 
  the attributes are set correctly using the "this" pointer

For example:
Input	Result
Model
Swift
Rental Price 
15000
*/

#include<iostream>

using namespace std;

class car
{
    private:
    string make;
    string model;
    int year;
    int rental_price;

    public:
    void setmake(string new_make){make=new_make;}
    void setmodel(string new_model){model=new_model;}
    void setyear(int new_year){year=new_year;}
    void setrental_price(int new_rental_price){rental_price=new_rental_price;}
    string getmake(){return make;}
    string getmodel(){return model;}
    int getyear(){return year;}
    int getrental_price(){return rental_price;}

    car(string new_make,string new_model,int new_year,int new_rental_price)
    {
        setmake(new_make);
        setmodel(new_model);
        setyear(new_year);
        setrental_price(new_rental_price);
    }
};

int main()
{
    string new_make,new_model;
    int new_year,new_rental_price;
   

    return 0;
}