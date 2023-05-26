/*
Write a C++ program to multiply two fractions using the overloading of the multiplication operator in C++.
*/

#include<iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Constructor
    Fraction(int num, int denom) {
        if(denom == 0) {
            throw std::invalid_argument("Denominator cannot be zero");
        }
        numerator = num;
        denominator = denom;
    }

    // Overload the * operator
    Fraction operator*(const Fraction& other) {
        return Fraction(numerator * other.numerator, denominator * other.denominator);
    }

    // Function to display the fraction
    void print() const {
        std::cout << numerator << "/" << denominator << std::endl;
    }
};

int main() {
    try {
        Fraction f1(3, 4);
        Fraction f2(2, 5);

        Fraction result = f1 * f2;
        
        std::cout << "The result of the multiplication is: ";
        result.print();  // Should print 6/20
    } catch(const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
