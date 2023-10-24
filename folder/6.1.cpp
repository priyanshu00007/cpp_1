/*6.1  Create a class named ‘String’ with one data member of type char *,
which stores a string. Include default, parameterized and copy
constructor to initialize the data member. Write a program to test this
class.*/

#include<iostream>
using namespace std;
class string
{
protected:
char *name;
public:
string()
{
    name = "hello world";
}
string(char *a)
{
	name = a;
}
void disp()
{
cout<<"the name is "<<name<<endl;
}
};
int main()
{
string s();
string.s1("c++");
s.disp();
s1.disp();
return 0;
}


