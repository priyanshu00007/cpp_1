#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int roll;
    char name[20];
    ifstream b;
    b.open("acb.txt",ios::in);
    b>>name;
    b>>roll;
    b.close();
    ofstream a;
    a.open("acb.txt",ios::out);
    a<<"priyanshu";
    a<<"34";
    a.close();

    return 0;
}
