#include<iostream>
using namespace std;
class emp
{
    protected:
int id,salary,days,working_hrs,salary_day;
char name[50];
};

class male_emp:public emp
{
public:
void det()
{
    cout<<"for male"<<endl;
	cout<<"enter your id"<<endl;
	cin>>id;
	cout<<"enter your name"<<endl;
	cin>>name;
	cout<<"enter your salary per day"<<endl;
	cin>>salary_day;
	cout<<"enter your working hrs"<<endl;
	cin>>working_hrs;
}
void computepay()
{
	salary = (salary_day * working_hrs )* 1000;
}
void display()
{
	cout<<"	your details are ";
	cout<<" your id is "<<id<<endl<<"name is "<<name<<endl<<"your working hrs are"<<working_hrs<<"and your salary is"<<salary<<endl<<endl;
}
};
class female_emp:public emp
{
public:
void det()
{
    cout<<"for female"<<endl;
	cout<<"enter your id"<<endl;
	cin>>id;
	cout<<"enter your name"<<endl;
	cin>>name;
	cout<<"enter your salary per day"<<endl;
	cin>>salary_day;
}
void computepay()
{
	salary = (days * 40 )* 1000;
}
void display()
{
	cout<<"	your details are "<<endl;
	cout<<" your id is "<<id<<endl<<"name is "<<name<<endl<<"and your salary is"<<salary<<endl;
}
};
int main()
{
	male_emp me;
	female_emp fe;
	me.det();
	me.computepay();
	me.display();
	fe.det();
	fe.computepay();
	fe.display();
	return 0;
}
