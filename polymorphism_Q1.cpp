/*
1.	Suppose you have a parent class called Animal. Define two child classes, Cat and Dog, that inherit from the Animal class. 
Both Cat and Dog should have a method called makeSound(), but the Cat's makeSound() method should return "Meow" and the Dog's makeSound() method should return "Woof". 
Then, write a function that takes an Animal object as an argument and calls its makeSound() method.
*/

#include <iostream>
#include <string>

// Define Animal class
class Animal {
public:
    virtual std::string makeSound() = 0; // pure virtual function
};

// Define Cat class, inheriting from Animal
class Cat : public Animal {
public:
    std::string makeSound() override { // override Animal's pure virtual function
        return "Meow";
    }
};

// Define Dog class, inheriting from Animal
class Dog : public Animal {
public:
    std::string makeSound() override { // override Animal's pure virtual function
        return "Woof";
    }
};

// Function that takes an Animal object and calls its makeSound() method
void animalSound(Animal& animal) {
    std::cout << animal.makeSound() << std::endl;
}

int main() {
    Cat cat;
    Dog dog;

    animalSound(cat); // outputs: Meow
    animalSound(dog); // outputs: Woof

    return 0;
}
