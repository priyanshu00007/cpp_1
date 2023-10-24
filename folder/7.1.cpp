#include<iostream>
using namespace std;
class publisher
{
public:
	int book_pages;
	char book_title[20];
    char tape_title[20];
};
class book:public publisher
{
public:
    void sett()
    {
        cout<<"enter your book title : ";
        cin>>book_title;
        cout<<"enter the pages of book : ";
        cin>>book_pages;
    }
    void disp()
    {
        cout<<"The title of the book is  : "<<book_title<<endl;
        cout<<"The book contain  : "<<book_pages<<endl<<" pages "<<endl;
    }
};
class tape:public book
{
protected:
    int hh,mm,ss;
    public:
    void compute()
    {
        cout<<endl;
        cout<<"enter your tape title : ";
        cin>>tape_title;
        cout<<"The tape contain  : "<<endl;
        cin>>hh>>mm>>ss;
    }
    void disp()
    {
        cout<<"The title of the tape is  : "<<tape_title<<endl;
        cout<<"The tape contain  : "<<hh<<" hh "<<mm<<" mm "<<ss<<" ss "<<endl;

    }
};
int main()
{
    int n;
    cout<<"enter your choice : 1 ->book 2->tape ";
    cin>>n;
    first:
    if(n == 1)
       {
         book b;
         b.sett();
        b.disp();
       }
    else if(n == 2)
        {
    tape t;
    t.compute();
    t.disp();
        }
        else
        {

            char ch,R ,r;
            cout<<"you had entered invalid entry:";
            cout<<"enter R to restart";
            cin>>ch;
            if( ch == R || ch ==r)
            {
               goto first;
            }
        }
    return 0;
}
