#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    // Student(int r, int c, double g)
    {
        // roll = r;
        // cls = c;
        // gpa = g;
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    // Student rahim;
    Student rahim(13, 4, 5.00);
    Student *karim = new Student(13, 4, 5.00);
    // rahim.roll = 101;
    // rahim.cls = 10;
    // rahim.gpa = 4.5;

    // Student karim;
    // karim.roll = 102;
    // karim.cls = 10;
    // karim.gpa = 4.8;

    Student karim(102, 10, 4.8);
    // cout << "Rahim" << endl;
    // cout << rahim.roll << endl;
    // cout << rahim.cls << endl;
    // cout << rahim.gpa << endl;

    // cout << "Karim" << endl;
    // cout << karim.roll << endl;
    // cout << karim.cls << endl;
    // cout << karim.gpa << endl;
    return 0;
}