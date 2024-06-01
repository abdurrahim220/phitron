// Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with a function to print the area and perimeter.

#include <bits/stdc++.h>
using namespace std;

class Triangle
{
public:
    int s1, s2, s3;
    Triangle(int a, int b, int c)
    {
        s1 = a;
        s2 = b;
        s3 = c;
    };
    void print_area()
    {
        float s = (s1 + s2 + s3) / 2.0;
        cout << s << endl;
        cout << "Perimeter is " << (s1 + s2 + s3) << endl;
    };
    // void print_area(int s1, int s2, int s3)
    // {
    //     float s = (s1 + s2 + s3) / 2.0;
    //     float area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
    //     cout << "Area of the triangle is: " << area << endl;
    // }
};

int main()
{
    Triangle t(3, 4, 5);
    t.print_area();
    return 0;
}