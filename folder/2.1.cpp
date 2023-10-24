#include<iostream>
using namespace std;
class A
{
public:
    void area(int r)
    {
        int a = r;
        int ar = 3.14 * a * a;
        cout<<"the area  of square is "<<ar<<endl;
    }
    void area(int r,int s)
    {
        int a = r;
        int b = s;
        int ar = a * b;
        cout<<"the area  of rectrangle is "<<ar<<endl;
    }
    void area(float x)
    {

    int a = x;
    int ar = a*a;
    cout<<"the area  of square is "<<ar<<endl;
    }

};
int main()
{
    A a;
    a.area(2);
    a.area(2,4);
    a.area(10);
    return 0;

}
