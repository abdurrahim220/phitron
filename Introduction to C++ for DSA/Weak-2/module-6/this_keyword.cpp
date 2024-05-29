#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name,
           int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Person p1("John", 25);
    Person p2("Alice", 30);
    Person p3("Bob", 35);
    p1.display();
    p2.display();
    p3.display();

    return 0;
}