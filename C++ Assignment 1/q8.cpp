//Write a C++ program to demonstrate
//(A) Copy Constructor (B) Parameterized Constructor (C) Virtual destructor

#include <iostream>
using namespace std;

class Demo
{
private:
    int value;

public:
    // Parameterized Constructor
    Demo(int v)
    {
        value = v;
        cout << "Parameterized Constructor called. Value = " << value << endl;
    }

    // Copy Constructor
    Demo(const Demo &obj)
    {
        value = obj.value;
        cout << "Copy Constructor called. Copied Value = " << value << endl;
    }

    // Virtual Destructor
    virtual ~Demo()
    {
        cout << "Destructor called for value: " << value << endl;
    }

    // Function to display value
    void display()
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    cout << "Creating Object A using Parameterized Constructor:\n";
    Demo A(10); // Calls parameterized constructor

    cout << "\nCreating Object B using Copy Constructor (Copying A):\n";
    Demo B(A); // Calls copy constructor

    cout << "\nDisplaying values:\n";
    A.display();
    B.display();

    cout << "\nExiting Program...\n";
    return 0; // Destructor is automatically called here
}
