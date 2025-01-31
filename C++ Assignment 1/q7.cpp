//Write a C++ program to create a class string, which stores string with constructor, displays the string and joins two strings with join user defined function taking two arguments of string object.

#include <iostream>
#include <cstring> // For string manipulation
using namespace std;

class StringClass
{
private:
    char str[100]; // Fixed size character array

public:
    // Constructor to initialize the string
    StringClass(const char *s = "")
    {
        strcpy(str, s);
    }

    // Function to display the string
    void display()
    {
        cout << str << endl;
    }

    // Function to join two StringClass objects
    void join(StringClass s1, StringClass s2)
    {
        strcpy(str, s1.str);  // Copy first string
        strcat(str, s2.str);  // Concatenate second string
    }
};

int main()
{
    char input1[50], input2[50];

    // Taking user input
    cout << "Enter first string: ";
    cin >> input1;
    cout << "Enter second string: ";
    cin >> input2;

    // Creating objects
    StringClass str1(input1), str2(input2), str3;

    // Display original strings
    cout << "First String: ";
    str1.display();
    cout << "Second String: ";
    str2.display();

    // Joining the strings
    str3.join(str1, str2);

    // Display the joined string
    cout << "Joined String: ";
    str3.display();

    return 0;
}
