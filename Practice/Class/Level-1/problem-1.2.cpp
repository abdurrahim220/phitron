#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll_no;
    string phone_number; // Changed to string to handle leading zeros
    string address;

    Student() {} // Default constructor (implicitly provided, but shown for clarity)
};

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student *students = new Student[n]; // Dynamically allocate an array of Student objects

    for (int i = 0; i < n; ++i)
    {
        cout << "Enter details for student " << i + 1 << endl;

        cout << "Name: ";
        cin >> ws; // To consume any leading whitespace characters
        getline(cin, students[i].name);

        cout << "Roll No: ";
        cin >> students[i].roll_no;

        cout << "Phone Number: ";
        cin >> ws;
        getline(cin, students[i].phone_number);

        cout << "Address: ";
        cin >> ws;
        getline(cin, students[i].address);
    }

    // Printing details of all students
    for (int i = 0; i < n; ++i)
    {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Roll No: " << students[i].roll_no << endl;
        cout << "Phone Number: " << students[i].phone_number << endl;
        cout << "Address: " << students[i].address << endl;
    }

    delete[] students; // Free the allocated memory

    return 0;
}

//     Input for Number of Students:
//         The program starts by asking the user for the number of students (n).

//     Dynamic Array of Students:
//         A dynamic array of Student objects is created using new Student[n]. This allows for an array of students of size n at runtime.

//     Loop to Take Input:
//         A loop runs n times, each time taking input for a student's name, roll number, phone number, and address. The ws and getline are used to handle input properly, especially for strings with spaces.

//     Assigning to Array:
//         Each student's details are directly assigned to the respective position in the array.

//     Printing Details:
//         Another loop runs through the array and prints the details of each student.

//     Memory Deallocation:
//         delete[] students is used to free the memory allocated for the dynamic array.

// This approach allows you to handle a dynamic number of students without defining a constructor, ensuring efficient memory usage and direct assignment of values to the data members.