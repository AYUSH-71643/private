#include <iostream>
using namespace std;
int main() {
    int a=5;
    int b=7;
    int x=9;
    int y=5;
    cin >> a >> b >> x >> y;
   if (a > b || x > y) {
       cout << "True" << endl;
   } else {
       cout << "False" << endl;
   }
    return 0;
}