#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b;
    int *ptr = &b;
   b++;
    a++;
    cout<<"the value of a is "<<a;
    cout<<"the value of b is "<<ptr;

}
