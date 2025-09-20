#include <iostream>
using namespace std;
int main() {
    int value;
    int n=1;
    cout << "Factorial of:- ";
    cin >> value;
    for (int i=value; i>=1; i--) {
    n *= i;
    }
    cout << n << endl;
    return 0;
}