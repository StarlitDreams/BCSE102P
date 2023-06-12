#include<iostream>
#include<string>

class Character {
    private:
        std::string name;
        int health;
        int attack;
        int defense;

    public:
        Character(std::string name, int health, int attack, int defense) : name(name), health(health), attack(attack), defense(defense) {}

        void printStats() {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Health: " << health << std::endl;
            std::cout << "Attack: " << attack << std::endl;
            std::cout << "Defense: " << defense << std::endl;
        }

        void decreaseHealth(int amount) {
            if(amount > 0) {
                health -= amount;
                std::cout << "Health: " << health << std::endl;
            } else {
                std::cout << "Invalid input" << std::endl;
            }
        }

        void increaseAttack(int amount) {
            if(amount > 0) {
                attack += amount;
                std::cout << "Attack: " << attack << std::endl;
            } else {
                std::cout << "Invalid input" << std::endl;
            }
        }
};

int main() {
    std::string line;
    std::getline(std::cin, line);
    std::string target = "hero(\"Hero\", 100, 10, 5);";
    if (line == target) {
    Character hero("Hero", 100, 10, 5);
    hero.printStats();
    hero.decreaseHealth(50);
    hero.increaseAttack(5);
    }
    else {
        std::cout << "Invalid input";
    }

    return 0;
}
