#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll,
            int cls,
            double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student *fun()
{
    Student *rahim = new Student(342, 4, 4.99);
    // Student rahim(342, 4, 4.99);
    // Student *p = &rahim;
    return rahim;
};

int main()
{
    Student *s = fun();
    // cout << "Roll: " << s.roll << endl;
    // cout << "Class: " << s.cls << endl;
    // cout << "GPA: " << s.gpa << endl;
    cout << s->roll << endl;
    cout << s->cls << endl;
    cout << s->gpa << endl;

    delete s;
    cout << s->roll << endl;
    cout << s->cls << endl;
    cout << s->gpa << endl;
    return 0;
}