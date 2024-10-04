#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

struct cmp {
    bool operator()(const Student &a, const Student &b) {
        if (a.marks == b.marks) {
            return a.roll > b.roll;  
        }
        return a.marks < b.marks;  
    }
};

int main() {
    int n;
    cin >> n;
    
    priority_queue<Student, vector<Student>, cmp> pq;
    
    for (int i = 0; i < n; i++) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }
    
    int Q;
    cin >> Q;
    
    while (Q--) {
        int c;
        cin >> c;
        
        if (c == 0) {
            
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));
            
            
            Student topStudent = pq.top();
            cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
            
        } else if (c == 1) {
            
            if (!pq.empty()) {
                Student topStudent = pq.top();
                cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
            } else {
                cout << "Empty" << endl;
            }
            
        } else if (c == 2) {
            
            if (!pq.empty()) {
                pq.pop();
            }
            
            
            if (!pq.empty()) {
                Student topStudent = pq.top();
                cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
            } else {
                cout << "Empty" << endl;
            }
        }
    }
    
    return 0;
}
