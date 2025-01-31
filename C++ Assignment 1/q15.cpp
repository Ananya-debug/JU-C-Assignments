// Write a C++ program to add two complex numbers using friend function

#include <bits/stdc++.h>
using namespace std;

class Complex_numbers
{
private:
     double real;
     double img;

public:
     Complex_numbers()
     {
          real = 0.0;
          img = 0.0;
     }
     void input()
     {
          cout << "Enter the real part: ";
          cin >> real;
          cout << "Enter the imaginary part: ";
          cin >> img;
     }
     friend void add(Complex_numbers c1, Complex_numbers c2);
};

void add(Complex_numbers c1, Complex_numbers c2)
{
     cout << "Sum of two complex numbers : " << c1.real + c2.real << " + " << c1.img + c2.img << "i" << endl;
}

int main()
{
     Complex_numbers c1, c2;
     cout<<"Enter the first complex number: "<<endl;
     c1.input();
     cout<<"Enter the second complex number: "<<endl;
     c2.input();
     add(c1, c2);
     return 0;
}
