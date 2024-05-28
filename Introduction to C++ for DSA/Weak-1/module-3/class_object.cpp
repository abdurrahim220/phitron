#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{
    Student c, a, b;
    // a.roll = 20;
    // a.cgpa = 3.45;
    // // a.name = "rakib";
    // char temp[100] = "rakib";
    // strcpy(a.name, temp);
    cin.getline(c.name, 100);
    getchar();
    cin >> c.roll >> c.cgpa;
    cin >> a.name >> a.roll >> a.cgpa;
    cin >> b.name >> b.roll >> b.cgpa;

    cout << "Name: " << a.name << endl;
    cout << "Roll: " << a.roll << endl;
    cout << "CGPA: " << a.cgpa << endl;
    cout << " " << endl;
    cout << "Name: " << b.name << endl;
    cout << "Roll: " << b.roll << endl;
    cout << "CGPA: " << b.cgpa << endl;
    cout << " " << endl;
    cout << "Name: " << c.name << endl;
    cout << "Roll: " << c.roll << endl;
    cout << "CGPA: " << c.cgpa << endl;

    return 0;
}