#include<iostream>

using namespace std;

class Hero{
    private:
    int health;
    char level;

    public:
    Hero(int newhealth ,char newlevel)
    :health{newhealth},level{newlevel}
    {}
    ~Hero(){}

};


int main()
{
    Hero *Jignesh= new Hero(5,'L');



    delete Jignesh;
    return 0;


}