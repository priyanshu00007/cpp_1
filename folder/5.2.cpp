#include<iostream>
using namespace std;
class C;
class B;
class A
{
private:
    int a = 10;
public:
    A()
        {

        }
        void num1()
        {
            cout<<"value of a is "<<a<<endl;
        }
       friend void add(A ,B,C);
};
class B
{
private:
    int b = 20;
public:
    B()
        {

        }
     void num2()
        {
            cout<<"value of b is "<<b<<endl;
        }
       friend void add(A,B,C);
};
class C
{
private:
    int c = 30;
public:
    C()
        {

        }
         void num3()
        {
            cout<<"value of c is "<<c<<endl;
        }
       friend void add(A,B,C);
};
    void add(A a,B b,C c)
    {
        int temp = 0;
        temp = a.a+b.b+c.c%3;
        cout<<"the average of A,B and C is "<<temp;
    }
    int main()
    {
        A a;
        B b;
        C c;
        a.num1();
        b.num2();
        c.num3();
        add(a,b,c);
        return 0;
    }

