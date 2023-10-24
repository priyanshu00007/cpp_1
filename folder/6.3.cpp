#include<iostream>
using namespace std;
class scheme
{
    protected:
	int scheme_id,name,outgoing_rate,mess_charge;
	char scheme_name;
};
class customer:public scheme
{
	private:
	int customer_id,mobile_no;
	char customer_name[10];
	public:
	void set()
{
		cout<<"enter your sch_id";
		cin>>customer_id;
		cout<<"enter your sch_name";
		cin>>customer_name;
		cout<<"enter your mobile_no";
		cin>>mobile_no;
}
	void compute( int a)
{
	int n;
	n = a;
	if ( n == 1)
{

}
}
	void disp()
{
	cout<<"your scheme_id"<<scheme_id;
	cout<<"your name is "<<name;
	cout<<"your mobile_no is"<<mobile_no;
	cout<<"you had choose"<<scheme_name<<"scheme";
	cout<<"your outgoing_rate is"<<outgoing_rate;
	cout<<"your message charge is"<<mess_charge;
}
};
int main()
{
int n;
cout<<"enter your choice";
cin>>n;
customer c;
c.set();

c.disp();
return 0;
}
