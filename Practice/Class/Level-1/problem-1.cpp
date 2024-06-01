#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll_no;
    string phone_number;
    string address;

    Student(string name,
            int roll_no, string phone_number,
            string address)
    {
        this->name = name;
        this->roll_no = roll_no;
        this->phone_number = phone_number;
        this->address = address;
    }
};

// with constructor

int main()
{
    Student s1("John", 2, "01860754544", "Dhaka");
    Student s2("Sam", 1, "0174114565", "Chittagong");
    Student s3("Alex", 3, "0198765432", "Sylhet");
    cout << s1.name << " " << s1.roll_no << " " << s1.phone_number << " " << s1.address << endl;
    cout << s2.name << " " << s2.roll_no << " " << s2.phone_number << " " << s2.address << endl;
    cout << s3.name << " " << s3.roll_no << " " << s3.phone_number << " " << s3.address << endl;
}