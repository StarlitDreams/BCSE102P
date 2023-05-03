#include<iostream>

using namespace std;

class A
{
    int x=5;
    friend class B;
};

class B
{
    public:
    void showA(A& a)
    {
        cout<<"A::x="<<a.x<<endl;
    }
};

int main()
{
    A a;
    B b;
    b.showA(a);
    return 0;
}