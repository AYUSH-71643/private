#include <iostream>
using namespace std;
class student {
public:
    string name;
    double roll;
    student(string n, double r) {
        name = n;
        roll = r;
    }
    void display_students() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }
};
int main() {
    student s1("Mohit", 101);
    cout << "Student 1 details:" << endl;
    s1.display_students();
    student s2("Ankit", 102);
    cout << "Student 2 details:" << endl;
    s2.display_students();
    return 0;
}