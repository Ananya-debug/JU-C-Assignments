//Write a C++ program to find Square of a Number using inline function.

#include <iostream>
using namespace std;

// Inline function to calculate square
inline double square(double num)
{
    return num * num;
}

int main()
{
    double num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Square of " << num << " is: " << square(num) << endl;

    return 0;
}
