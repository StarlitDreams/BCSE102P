/*
Write a Program to read an odd number N. and overload the Prefix ++ increment operator and Prefix -- decrement operator.
*/

#include <iostream>

class Number {
private:
    int num;

public:
    // Constructor
    Number(int n) : num(n) {
        if(n % 2 == 0) {
            throw std::invalid_argument("Initial number must be odd");
        }
    }

    // Overloading prefix ++ operator
    Number& operator++() {
        num += 2;
        return *this;
    }

    // Overloading prefix -- operator
    Number& operator--() {
        if(num > 1) {
            num -= 2;
        } else {
            throw std::invalid_argument("Cannot decrement below 1");
        }
        return *this;
    }

    // Function to print the number
    void print() {
        std::cout << "Number: " << num << std::endl;
    }
};

int main() {
    try {
        Number num(5);

        // Overloaded ++ operator
        ++num;
        num.print(); // Should print 7

        // Overloaded -- operator
        --num;
        num.print(); // Should print 5
    } catch(const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
