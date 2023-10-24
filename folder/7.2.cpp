#include<iostream>
using namespace std;
class account
{
    protected:
    int acc_no,value,choice,number,balance = 0;;
    char acc_name[40],acc_type[20];

};
class saving:public account
{
    public:
    void sett()
    {
        cout<<"enter your account number";
        cin>>acc_no;
        cout<<"enter your account holder name";
        cin>>acc_name;
    };
    void compute()
    {

    cout<<"enter your choice :"<<endl;
    cout<<"1 ->withdraw 2->deposit"<<endl;
    cin>>choice;
    if(choice == 1)
    {
        cout<<"enter the amount your want to withdraw";
        cin>>number;
        balance = balance + number;
        cout<<"the balance in your account is "<< balance;
    }
    else if( choice == 2)
    {
        cout<<"enter the amount your want to deposit";
        cin>>number;
        balance = balance + number;
        cout<<"the balance in your account is "<< balance;
    }
    }
    void disp()
    {
        cout<<"your account number is "<<acc_no;
        cout<<"your name is "<<acc_name;
        cout<<"your current balance in your current account is :  "<<balance;

    }
};
class current:public saving
{
 public:
    void sett()
    {
        cout<<"enter your account number";
        cin>>acc_no;
        cout<<"enter your account holder name";
        cin>>acc_name;
    }
     void compute()
    {

    cout<<"enter your choice :";
    cin>>choice;
    if(choice == 1)
    {
        cout<<"enter the amount your want to withdraw";
        cin>>number;
        balance = balance + number;
        cout<<"the balance in your saving account is "<< balance;
    }
    else if( choice == 2)
    {
        cout<<"enter the amount your want to deposit";
        cin>>number;
        balance = balance + number;
        cout<<"the balance in your account is "<< balance;
    }
    }
    void disp()
    {
        cout<<"your account number is "<<acc_no;
        cout<<"your name is "<<acc_name;
        cout<<"your current balance in your current account is :  "<<balance;

    }
};

int main()
{


    int n;
    cout<<"enter your account type"<<endl;
    cout<<"1 -> saving 2 -> current"<<endl;
    cin>>n;

    if(n == 1)
    {
         saving s;
    s.sett();
    s.compute();
    s.disp();
    }
    else if(n == 2)
    {
    current c;
    c.sett();
    c.compute();
    }
    else
    {
        cout<<"you had entered invalid entry try again"<<endl;
        main();
    }
    return 0;

}
