#include <iostream>
using namespace std;
int main() {
    int math = 80;
    int computer = 95;
    int science = 86;
    int english = 89;
    int total = math + computer + science + english;
    int max = 4 * 100;
    float percentage = (total / (float)max) * 100;

    cout << "Percentage: " << percentage << "%" << endl;
    return 0;
}