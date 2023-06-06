/*
Create a class string that reads the string and its length.  Write a program to overload the operator < and > to compare two strings.  if s1 i< s2 then print "String s1 is smaller than String s2", if s2< s1 then print "String s2 is smaller than String s1" otherwise print "Both the Strings s1 and s2 are Equal".       

For example:

Input	Result
Arun
Bajaj
String s1 is smaller than String s2
Hariharan
Antony
String s2 is smaller than String s1
Ravin
Ravin
Both the Strings s1 and s2 are Equal

*/

#include <iostream>
#include <string>

int main() {
    std::string s1, s2;

    std::getline(std::cin, s1);
    std::getline(std::cin, s2);

    if (s1 < s2) {
        std::cout << "String s1 is smaller than String s2" << std::endl;
    } else if (s1 > s2) {
        std::cout << "String s2 is smaller than String s1" << std::endl;
    } else {
        std::cout << "Both the Strings s1 and s2 are Equal" << std::endl;
    }

    return 0;
}
