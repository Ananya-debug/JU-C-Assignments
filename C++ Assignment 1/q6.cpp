//Write a C++ Program using constructor and destructor for checking if the given year is leap year or not.

#include <iostream>
using namespace std;

class LeapYearChecker
{
private:
    int year;

public:
    LeapYearChecker(int y)
    {
        year = y;
        cout << "Checking year: " << year << endl;

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            cout << year << " is a Leap Year." << endl;
        else
            cout << year << " is NOT a Leap Year." << endl;
    }
};

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    LeapYearChecker obj(year);

    return 0;
}
