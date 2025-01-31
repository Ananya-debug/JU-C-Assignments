//Write a C++ program to create a class string, which stores string with constructor, displays the string and joins two strings with join user defined function taking two arguments of string object.

#include <iostream>
#include <cstring>
using namespace std;

class StringClass
{
private:
    char str[100];

public:

    StringClass(const char *s = "")
    {
        strcpy(str, s);
    }
    void display()
    {
        cout << str << endl;
    }

    void join(StringClass s1, StringClass s2)
    {
        strcpy(str, s1.str);  
        strcat(str, s2.str);  
    }
};

int main()
{
    char input1[50], input2[50];

    cout << "Enter first string: ";
    cin >> input1;
    cout << "Enter second string: ";
    cin >> input2;

    
    StringClass str1(input1), str2(input2), str3;
    
    cout << "First String: ";
    str1.display();
    cout << "Second String: ";
    str2.display();

    
    str3.join(str1, str2);

    // Display the joined string
    cout << "Joined String: ";
    str3.display();

    return 0;
}
