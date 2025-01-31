//Write a C++ program to create a class complex having two integers real and imaginary. Create a three constructors function taking no argument, one argument and two arguments for three constructors. Show () and sum() functions are member functions, displaying and finding the addition of two objects respectively

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    // Default Constructor (No Arguments)
    Complex()
    {
        real = 0;
        imag = 0;
    }

    // Constructor with One Argument (Real Part Only)
    Complex(int r)
    {
        real = r;
        imag = 0;
    }

    // Constructor with Two Arguments (Real and Imaginary Parts)
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    // Function to display the complex number
    void show()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    // Function to add two complex numbers
    Complex sum(Complex obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
};

int main()
{
    // Creating objects using different constructors
    Complex C1;        // Default Constructor
    Complex C2(5);     // Constructor with one argument
    Complex C3(3, 4);  // Constructor with two arguments

    cout << "Complex Number 1: ";
    C1.show();
    cout << "Complex Number 2: ";
    C2.show();
    cout << "Complex Number 3: ";
    C3.show();

    // Adding two complex numbers
    Complex C4;
    C4 = C2.sum(C3);

    cout << "Sum of Complex Number 2 and 3: ";
    C4.show();

    return 0;
}
