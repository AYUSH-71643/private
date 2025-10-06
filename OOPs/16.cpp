#include <iostream>
using namespace std;

class show {
public:
    static int x;
    int y, z;

    show(int i, int j) {
        y = i;
        z = j;
        x++;
    }

    void display() {
        cout << "y: " << y << endl;
        cout << "z: " << z << endl;
    }

    static void disp() {
        cout << "Value of x: " << x << endl;
    }
};

int show::x = 10;

int main() {
    show s1(7, 8);
    show s2(9, 10);
    show s3(5, 6);

    s1.display();
    show::disp();

    s2.display();
    s3.display();

    show::disp();

    return 0;
}