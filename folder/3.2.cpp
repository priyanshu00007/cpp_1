#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
//function called
double power(double m,double n)
{
    double t;
    t = pow(m,n);        //power
    return t;
}
int main()
{
    double num,ans;
    int p;
    cout<<"enter number ";
    cin>>num;
    cout<<"enter power ";
    cin>>p;

     if(p == 0)
     {
         ans = pow(num,2);
         cout<<"pow is "<<ans;
     }
     else{
        ans = pow(num,p);
        cout<<"ans is "<<ans;
     }
     return 0;
}
