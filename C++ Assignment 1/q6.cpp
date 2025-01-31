//Write a C++ Program using constructor and destructor for checking if the given year is leap year or not.

#include <iostream>
using namespace std;

class LeapYearChecker
{
private:
    int year;

public:
    // Constructor to initialize the year and check if it's a leap year
    LeapYearChecker(int y)
    {
        year = y;
        cout << "Checking year: " << year << endl;

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            cout << year << " is a Leap Year." << endl;
        else
            cout << year << " is NOT a Leap Year." << endl;
    }

    // Destructor
    ~LeapYearChecker()
    {
        cout << "Exiting the program. Object destroyed." << endl;
    }
};

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    // Creating an object, which invokes the constructor
    LeapYearChecker obj(year);

    return 0;
}
