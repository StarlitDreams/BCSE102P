/*
A car rental company wants to keep track of its fleet of cars. Each car has a make, model, year, and rental price. The company wants to be able to calculate the total rental price of all its cars and also find the car with the highest rental price. Design a program using OOPs and the "this" pointer to implement this scenario. Create a new car object and verify that all the attributes are set correctly using the "this" pointer

For example:

Input	Result
Model
Swift
Rental Price 
15000

*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Car {
public:
    string getModel(){
        return this->model;
    }
    int getYear() {
        return this->year;
    }
    double getRentalPrice() {
        return this->rentalPrice;
    }
    void setRentalPrice(double rentalPrice) {
        this->rentalPrice = rentalPrice;
    }
    void setMake(string make) {
        this->make = make;
    }
    void setModel(string model) {
        this->model = model;
    }
    void setYear(int year) {
        this->year = year;
    }


private:
    string make;
    string model;
    int year;
    double rentalPrice;
};



int main() {
    string inp;
    getline(cin,inp);
    Car swift;
    swift.setModel("Swift");
    swift.setRentalPrice(15000);
    swift.setYear(2022);
    if(inp=="Model")
    {
        cout<<swift.getModel()<<endl;;
    }
    else if(inp=="Year")
    {
        cout<<swift.getYear()<<endl;
    }
    else{
        cout<<swift.getRentalPrice()<<endl;
    }

    return 0;
}
