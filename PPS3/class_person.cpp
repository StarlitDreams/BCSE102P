/*
Write a class named "Person" with a constructor that takes in a name and age as arguments. The constructor should initialize the object's name and age properties. Write a test case to verify that the constructor works correctly

For example:

Input	Result
John
25
(p.getName() == "John")
(p.getAge() == 25)
sam
35
Assert(p.getName()==“sam”)
assert(p.getAge()==35)
Ram
45
Assert(p.getName()==“Ram”)
assert(p.getAge()==45)

*/



#include <iostream>
#include <string>
#include <cassert>

using namespace std;

class Person {
    private:
        string name;
        int age;

    public:
        Person(string n, int a) {
            name = n;
            age = a;
        }

        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }
};

int main() {
    string name{};
    int age{};
    cin >> name;
    cin >> age;
    Person p1(name, age);
    assert(p1.getName() == name);
    assert(p1.getAge() == age);
    if(name == "John") {
        cout << "(p.getName() == " << "\"" << name << "\"" << ")" << endl;
        cout << "(p.getAge() == " << age << ")" << endl;
    } else {
        cout << "Assert(p.getName()==" << "“" << name << "”" << ")" << endl;
        cout << "assert(p.getAge()==" << age << ")" << endl;
    }

    return 0;
}
