//Write a menu-driven C++ program to calculate volume of cube, cuboid, cone, cylinder, and sphere using function overloading. For an incorrect choice, proper error message should be displayed

#include <iostream>
using namespace std;

class VolumeCalculator
{
public:
    double volume(double side)
    {
        return side * side * side;
    }
    double volume(double length, double width, double height)
    {
        return length * width * height;
    }
    double volume(double radius, double height, char shape)
    {
        if (shape == 'c')
            return (3.1416 * radius * radius * height) / 3;
        else
            return -1;
    }
    double volume(double radius, double height, int shape)
    {
        if (shape == 1)
            return 3.1416 * radius * radius * height;
        else
            return -1;
    }
    double volume(double radius, char shape)
    {
        if (shape == 's')
            return (4.0 / 3) * 3.1416 * radius * radius * radius;
        else
            return -1;
    }
};

int main()
{
    VolumeCalculator vc;
    int choice;
    
    do
    {
        cout << "\nChoose a shape to calculate volume:\n";
        cout << "1. Cube\n2. Cuboid\n3. Cone\n4. Cylinder\n5. Sphere\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            double side;
            cout << "Enter side length of the cube: ";
            cin >> side;
            cout << "Volume of Cube: " << vc.volume(side) << endl;
            break;
        }
        case 2:
        {
            double l, w, h;
            cout << "Enter length, width, and height of the cuboid: ";
            cin >> l >> w >> h;
            cout << "Volume of Cuboid: " << vc.volume(l, w, h) << endl;
            break;
        }
        case 3:
        {
            double r, h;
            cout << "Enter radius and height of the cone: ";
            cin >> r >> h;
            cout << "Volume of Cone: " << vc.volume(r, h, 'c') << endl;
            break;
        }
        case 4:
        {
            double r, h;
            cout << "Enter radius and height of the cylinder: ";
            cin >> r >> h;
            cout << "Volume of Cylinder: " << vc.volume(r, h, 1) << endl;
            break;
        }
        case 5:
        {
            double r;
            cout << "Enter radius of the sphere: ";
            cin >> r;
            cout << "Volume of Sphere: " << vc.volume(r, 's') << endl;
            break;
        }
        case 6:
            break;
        default:
            cout << "Invalid choice! Please select a valid option.\n";
        }
    } while (choice != 6);

    return 0;
}
