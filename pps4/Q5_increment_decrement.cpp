/*
Write a Program to read an odd number N. and overload the Prefix ++ increment operator and Prefix -- decrement operator.

Note: Let us assume that N=11 then ++N should print N=13 and --N should print N=9

For example:

Input	Result
15
++
17
25
--
23
0
Negative value

*/

#include <iostream>
#include <string>

class OddNumber {
public:
    int value;

    OddNumber(int n): value(n) {}

    OddNumber operator++() {
        value += 2;
        return *this;
    }

    OddNumber operator--() {
        value -= 2;
        return *this;
    }
};

int main() {
    int n;
    std::string operation;

    std::cin >> n;

    if (n <= 0) {
        std::cout << "Negative value" << std::endl;
        return 0;
    }

    std::cin >> operation;
    OddNumber number(n);

    if (operation == "++") {
        ++number;
        std::cout << number.value << std::endl;
    }
    else if (operation == "--") {
        --number;
        std::cout << number.value << std::endl;
    }

    return 0;
}
