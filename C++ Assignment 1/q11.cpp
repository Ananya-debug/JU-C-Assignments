//Write a C++ program to overload the function calculate() as followsvoid calculate(int m, char ch) with one integer argument and one character argument. If ch is ‘r’ then the function reverse the digits of integer m. If ch is ‘p’, then the function will check whether integer m is prime or not. It should be noted that the number of digits in m should be greater than 1. Note: no library function should be used.

#include <iostream>
using namespace std;

class Calculator
{
public:
    void calculate(int m, char ch)
    {
        if (m < 10)
        {
            cout << "Error: The number must have more than 1 digit." << endl;
            return;
        }

        if (ch == 'r')
        {
            int rev = 0, temp = m;
            while (temp > 0)
            {
                rev = rev * 10 + temp % 10;
                temp /= 10;
            }
            cout << "Reversed Number: " << rev << endl;
        }
        else if (ch == 'p')
        {
            if (m < 2)
            {
                cout << "The number is not prime." << endl;
                return;
            }

            bool isPrime = true;
            for (int i = 2; i * i <= m; i++)
            {
                if (m % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
                cout << "The number is prime." << endl;
            else
                cout << "The number is not prime." << endl;
        }
        else
        {
            cout << "Invalid character! Use 'r' for reverse and 'p' for prime check." << endl;
        }
    }
};

int main()
{
    Calculator calc;
    int num;
    char option;

    cout << "Enter an integer (more than one digit): ";
    cin >> num;
    cout << "Enter 'r' to reverse or 'p' to check prime: ";
    cin >> option;

    calc.calculate(num, option);

    return 0;
}
