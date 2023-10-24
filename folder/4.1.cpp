#include<iostream>
using namespace std;
class A
{
private:
    int x;
public:
    void set(int x)
    {
        this->x;
    }
    void display()
    {
        cout<<"the value of x is "<<x;
    }
};
int main()
{
    A a;
   int  x = 10;
    a.set(x);
    a.display();
    return 0;
}
