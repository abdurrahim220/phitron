
// Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and breadth are passed as parameters to its constructor.

#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    int length, breadth;
    
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int Area()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle rect1(4, 5);
    Rectangle rect2(5, 8);

    // Printing the area of the rectangles
    cout << "Area of rectangle with sides 4 and 5: " << rect1.Area() << endl;
    cout << "Area of rectangle with sides 5 and 8: " << rect2.Area() << endl;
    return 0;
}