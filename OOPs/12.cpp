#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
    Person(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    Person p("Alice", 25);
    p.display();
    return 0;
}