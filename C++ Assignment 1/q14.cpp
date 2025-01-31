// Write a C++ program to swap two numbers using friend function without using third variable

#include <bits/stdc++.h>
using namespace std;

class Swapping
{
private:
     int a, b;

public:
     void input()
     {
          cout << "Enter the first number : " << endl;
          cin >> a;
          cout << "Enter the second number : " << endl;
          cin >> b;
     }
     friend void swap(Swapping obj);
};

void swap(Swapping obj)
{
     cout << "Before swapping : " << obj.a << " " << obj.b << endl;
     obj.a = obj.a + obj.b;
     obj.b = obj.a - obj.b;
     obj.a = obj.a - obj.b;
     cout << "After swapping : " << obj.a << " " << obj.b << endl;
}

int main()
{
     Swapping obj;
     obj.input();
     swap(obj);
     return 0;
}