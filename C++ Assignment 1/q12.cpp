//Write a C++ program to overload operator ‘+’ to concatenate two strings and hence reverse the concatenated string.

#include <bits/stdc++.h>
using namespace std;

class StringManip
{
private:
    string str;

public:
    // Constructor
    StringManip(string s = "") : str(s) {}

    // Overloaded + operator for string concatenation
    StringManip operator+(const StringManip &ob) const
    {
        return StringManip(str + ob.str); // Concatenates two strings
    }

    // Function to reverse the string
    void reverseString()
    {
        reverse(str.begin(), str.end());
    }

    // Display function
    void display() const
    {
        cout << str << endl;
    }
};

int main()
{
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    StringManip obj1(s1), obj2(s2), obj3;

    obj3 = obj1 + obj2; // Concatenating two strings using overloaded +

    cout << "Concatenated String: ";
    obj3.display();

    obj3.reverseString(); // Reversing the concatenated string
    cout << "Reversed Concatenated String: ";
    obj3.display();

    return 0;
}
