/*
Define a class called Calculator that has four overloaded methods for performing addition, subtraction, multiplication, and division. 
Each method should take two arguments of different data types (e.g., int and float) and return the result of the operation. 
The class should be able to handle all combinations of data types.
*/

#include<iostream>

using namespace std;

class Calculator {
    public:
        int add(int a, int b) {
            return a + b;
        }
        float add(float a, float b) {
            return a + b;
        }
        int subtract(int a, int b) {
            return a - b;
        }
        float subtract(float a, float b) {
            return a - b;
        }
        int multiply(int a, int b) {
            return a * b;
        }
        float multiply(float a, float b) {
            return a * b;
        }
        int divide(int a, int b) {
            return a / b;
        }
        float divide(float a, float b) {
            return a / b;
        }
};

int main() {
    Calculator calc;
    int a,b;
    float c,d;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Enter two floats: ";
    cin >> c >> d;

    cout << "Addition of integers: " << calc.add(a,b) << endl;
    cout << "Addition of floats: " << calc.add(c,d) << endl;
    cout << "Subtraction of integers: " << calc.subtract(a,b) << endl;
    cout << "Subtraction of floats: " << calc.subtract(c,d) << endl;
    cout << "Multiplication of integers: " << calc.multiply(a,b) << endl;
    cout << "Multiplication of floats: " << calc.multiply(c,d) << endl;
    cout << "Division of integers: " << calc.divide(a,b) << endl;
    cout << "Division of floats: " << calc.divide(c,d) << endl;
    
    return 0;
}