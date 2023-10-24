#include<iostream>
using namespace std;
class student
{
private:
    int roll,marks[5],sum = 0,i,avg = 0;
    char name[50];
public:
    void details()
    {
        cout<<"enter your roll_no :"<<endl;
        cin>>roll;
        cout<<"enter your name : "<<endl;
        cin>>name;
    }
    void subject() {
        int sum = 0; // Initialize sum here
        cout << "Enter your marks for 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
            sum += marks[i];
            avg = sum / 5;
        }

        cout << "Your marks for 5 subjects are: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << "\nSum = " << sum;
        cout << "\navg= " << avg;
    }
};
int main()
{
    student s;
    s.details();
    s.subject();
    return 0;
}
