#include<iostream>

using namespace std;

class box
{
    private:
        int length;
    public:
    box():length(0){}
    friend int printLength(box); //friend function
};

int printLength(box b)
{
    b.length += 10;
    return b.length;
}
int main()
{
    box b;
    cout<<"Length of box: "<<printLength(b)<<endl;
    return 0;
}