#include <iostream>
using namespace std;
int main() {
    int i,j,k, max;
cout << "Enter Minimum Value of first, second, third number and then maximum value respectively: ";
    cin >> i >> j >> k >> max;
    for(int i; i>=max; i = i-3){
        if (i==3)
        cout << " " << i;
}
cout << "\n"; 
    for(int j; j>=max; j = j-3) {
    cout << " " << j ;
    }
    cout << "\n"; 
    for(int k; k<=max; k = k+9) {
    cout << " " << k ;
    }
    return 0;
}