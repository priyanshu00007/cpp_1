#include<iostream>
using namespace std;
class currency2;
class  currency1
{
private:
    int rupees1,paisa1;
public:
    currency1()
    {
        rupees1 = 0;
        paisa1=0;
    }
    currency1(int x,int y)
    {
        rupees1 = x;
        paisa1 = y;
    }
    void compute1()
    {
        if( paisa1 <= 100)
        {

            paisa1 = paisa1-100;
            rupees1++;

        }
    }
    void disp()
    {
        cout<<"you have "<<rupees1<<" rupees and "<<paisa1<<" paisa "<<endl;
    }
    friend void addcurrency(currency1,currency2);

};
class  currency2
{
private:
    int rupees2,paisa2;
public:
    currency2()
    {
        rupees2 = 0;
        paisa2 =0;
    }
    currency2(int p,int q)
    {
        rupees2 = p;
        paisa2 = q;
    }
    void compute2()
    {
        if( paisa2 <= 100)
        {

            paisa2 = paisa2-100;
            rupees2++;

        }
    }
    void disp()
    {
        cout<<"you have "<<rupees2<<" rupees and "<<paisa2<<" paisa "<<endl;
    }
    friend void addcurrency(currency1, currency2);
};

     void addcurrency(currency1 obj1, currency2 obj2)
     {
         int temp1,temp2
       obj1.temp1 = obj1.rupees1 + obj2.rupees2;
       obj2.temp2 = obj1.paisa + obj2.paisa;
     }

int main()
{
    int x,y,p,q,rupees,paisa;
 cout<<"the value of rupees1 is ";
 cin>>x;
 cout<<"the value of paisa1 is ";
 cin>>y;
 cout<<"the value of rupees2 is ";
 cin>>p;
 cout<<"the value of paisa2 is ";
 cin>>q;
    currency1 c1(rupees1,paisa1);
    currency2 c2(rupees1,paisa2);
    c1.compute1();
    c1.disp();
    c2.compute2();
    c2.disp();
    add(a,b)
    return 0;
}
