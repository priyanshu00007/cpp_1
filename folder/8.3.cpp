//when we apply virtual it will ignore first class and go to another class
#include<iostream>
using namespace std;

class A
{
public:
    void disp()
    {
        cout << "this is class A";
    }
};

class B : public A  // Inherit from class A
{
public:
     void disp()
    {
        cout << "this is class B";
    }
};

int main()
{
    A *a;
    B b;
    a = &b;
    a->disp();
    return 0;
}
