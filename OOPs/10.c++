#include <iostream>

using namespace std;

int main() {
    int a = 1;
    for (a=1; a<=10; a++) {
        if (a==2) {
            continue;
        }
        cout << a << " " << endl;
        if (a==8) {
            break;
        }
    }
    return 0;
}