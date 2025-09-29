#include <iostream>
using namespace std;
class Wall {
public:
    double length;
    double height;
    Wall(double len, double hgt) {
        length = len;
        height = hgt;
    }
    double area() {
        return length * height;
    }
};
int main() {
    Wall wall1(5.0, 3.0);
    Wall wall2(4.0, 2.5);

    cout << "Area of wall1: " << wall1.area() << " square units" << endl;
    cout << "Area of wall2: " << wall2.area() << " square units" << endl;

    return 0;
}