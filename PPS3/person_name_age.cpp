/*
Q9
Write a class named "Person" with a constructor that takes in a name and age as arguments. The constructor should initialize the object's name and age properties. Write a test case to verify that the constructor works correctly

For example:

Input	Result
Person p("John", 25)
assert(p.getName() == "John")
assert(p.getAge() == 25)
Person p(“sam”,35);
Assert(p.getName()==“sam”)
assert(p.getAge()==35)
person p(“Ram”,45);
Assert(p.getName()==“Ram”)
assert(p.getAge()==45)
*/

#include <iostream>
#include <string>

using namespace std;

class Person
{
    private:
    string name;
    int age;
    
    public:
    Person(string new_name,int new_age)
    {
        name=new_name;
        age=new_age;
        cout<<"Construdtor called"<<endl;
    }

    string getName(){return name;}
    int getAge(){return age;}
    
};

int main()
{
    string new_name;
    int new_age;
    cin>>new_name>>new_age;
    Person p(new_name,new_age);
    cout<<p.getName()<<endl;
    cout<<p.getAge()<<endl;

    return 0;
}