#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;
    float marks;
public:
    void input() {
        cout << "Enter name, roll, marks: ";
        cin >> name >> roll >> marks;
    }
    void display() {
        cout << "Name: " << name << "\nRoll: " << roll << "\nMarks: " << marks;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
}
