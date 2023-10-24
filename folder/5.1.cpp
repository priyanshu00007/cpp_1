#include<iostream>
using namespace std;
class B;
class A
{
private:
    int a;
public:
    A(int x)
        {
            int a = x;
        }
    void num1()
    {

    }
       friend void max(A ,B);
};
class B
{
private:
    int b;
public:
    B(int y)
        {
            int b = y;
        }
    void num2()
    {

    }
       friend void max(A,B);
};
    void max(A a,B b)
    {
        if(a.a<b.b)
        {
           cout<<"here b is greater then a";
        }
        else
        {
           cout<<"here a is greater then b";

        }
    }
    int main()
    {
        A a(10);
        B b(20);
        a.num1();
        b.num2();
        max(a,b);
        return 0;
    }
