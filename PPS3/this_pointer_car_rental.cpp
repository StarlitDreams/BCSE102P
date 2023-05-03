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
    Car(string make, string model, int year, double rentalPrice) {
        this->make = make;
        this->model = model;
        this->year = year;
        this->rentalPrice = rentalPrice;
    }
    string getmModel(){
        return this->model;
    }

    double getRentalPrice() {
        return this->rentalPrice;
    }

private:
    string make;
    string model;
    int year;
    double rentalPrice;
};



int main() {
    string inp;
    getlint(cin,inp)

    return 0;
}
