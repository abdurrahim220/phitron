#include <bits/stdc++.h>
using namespace std;
struct Student
{
public:
    int id;
    string name;
    char section;
    float totalMarks;
};

bool compareStudents(const Student &a, const Student &b)
{
    if (a.totalMarks == b.totalMarks)
    {
        return a.id < b.id;
    }
    return a.totalMarks > b.totalMarks;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        Student students[3];

        for (int i = 0; i < 3; ++i)
        {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].totalMarks;
        }

        Student topStudent = *min_element(students, students + 3, compareStudents);

        cout << topStudent.id << " " << topStudent.name << " " << topStudent.section << " " << topStudent.totalMarks << endl;
    }

    return 0;
}