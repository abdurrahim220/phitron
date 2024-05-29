#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int mark1;
    int mark2;
    
    Person(string nm, int ag, int m1, int m2)
    {
        name = nm;
        age = ag;
        mark1 = m1;
        mark2 = m2;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    int total_marks()
    {
        return mark1 + mark2;
    }
};

int main()
{
    Person p1("John", 25, 40, 50);
    // cout << p1.name << " is " << p1.age << " years old." << endl;
    p1.display();
    cout << "Total Marks: " << p1.total_marks() << endl;

    return 0;
}