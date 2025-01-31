/* Write a C++ program to overload the following operators
a) ‘>>’ to accept time from user (in hours: mins:sec)
b) ‘+’ to add two different user-given time.
c) ‘<<’ to display the time in hours: mins: sec format.
d) ‘==’ to check whether two user-given times are equal or not.
*/

#include <bits/stdc++.h>
using namespace std;

class OperatorOverloading
{
private:
    int hr, min, sec;

public:
   
    OperatorOverloading() : hr(0), min(0), sec(0) {}


    friend istream &operator>>(istream &in, OperatorOverloading &ob) 
    {
        cout << "Enter time in hours, minutes and seconds: ";
        in >> ob.hr >> ob.min >> ob.sec;
        return in;
    }

    
    friend ostream &operator<<(ostream &out, const OperatorOverloading &ob) 
    {
        out << ob.hr << ":" << ob.min << ":" << ob.sec;
        return out;
    }

    
    OperatorOverloading operator+(const OperatorOverloading &ob) const 
    {
        OperatorOverloading result;
        result.sec = sec + ob.sec;
        result.min = min + ob.min;
        result.hr = hr + ob.hr;

        
        if (result.sec >= 60)
        {
            result.min += result.sec / 60;
            result.sec %= 60;
        }
        if (result.min >= 60)
        {
            result.hr += result.min / 60;
            result.min %= 60;
        }
        return result;
    }

    
    bool operator==(const OperatorOverloading &ob) const 
    {
        return (hr == ob.hr && min == ob.min && sec == ob.sec);
    }
};

int main()
{
    OperatorOverloading ob1, ob2, ob3;

    cin >> ob1;
    cin >> ob2;

    ob3 = ob1 + ob2;

    cout << "First Time: " << ob1 << endl;
    cout << "Second Time: " << ob2 << endl;
    cout << "Sum of Two Times: " << ob3 << endl;

    if (ob1 == ob2)
        cout << "Both times are equal" << endl;
    else
        cout << "Times are not equal" << endl;

    return 0;
}
