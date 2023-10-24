#include<iostream>
using namespace std;
class A
{
private:
    int a = 20,b=10;
    public:
    void swap()
    {
        int c;
        c = a;
        a = b;
        b = c;
    cout<<"value of a :"<<a<<endl;
    cout<<"value of b :"<<b<<<endl;
    }
};
int main()
{
    A a;
    a.swap();
    return 0;
}
