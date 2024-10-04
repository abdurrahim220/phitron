#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int role;
    int marks;
    Student(string name, int role, int marks)
    {
        this->name = name;
        this->role = role;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(const Student &a, const Student &b)
    {
        return a.marks > b.marks;
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int role, marks;
        cin >> name >> role >> marks;
        Student s(name, role, marks);
        pq.push(s);
    }
    while (!pq.empty())
    {
        Student s = pq.top();
        pq.pop();
        cout << s.name << " " << s.role << " " << s.marks << endl
             << endl;
    }

    return 0;
}