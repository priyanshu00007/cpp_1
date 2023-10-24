#include <iostream>
using namespace std;

class Calendar {
private:
    int date, month, year;

public:
    // Constructor with default values (0, 0, 0)
    Calendar(int x = 0, int y = 0, int z = 0) {
        date = x;
        month = y;
        year = z;
    }

    void add() {
        int daysToAdd;
        cout << "Enter the number of days you want to add: ";
        cin >> daysToAdd;
        date += daysToAdd;

        while (date > 31 || month > 12) {
            // Checking for days in each month
            if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && date > 31) {
                date -= 31;
                month++;
            } else if ((month == 4 || month == 6 || month == 9 || month == 11) && date > 30) {
                date -= 30;
                month++;
            } else if (month == 2 && date > 29) {
                date -= 29;
                month++;
            }

            if (month > 12) {
                month -= 12;
                year++;
            }
        }
    }

    void display() {
        cout << "Date: " << date << '/' << month << '/' << year << endl;
    }
};

int main() {
    int initialDate, initialMonth, initialYear;
    cout << "Enter the initial date, month, and year: ";
    cin >> initialDate >> initialMonth >> initialYear;

    // Create a Calendar object with the initial values
    Calendar c(initialDate, initialMonth, initialYear);

    // Call the add and display methods
    c.add();
    c.display();

    return 0;
}
