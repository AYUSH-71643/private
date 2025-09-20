#include <iostream>

using namespace std;

int main() {
    int arr[100], n, i, element, check=0;
    cout << "Enter size of array:- ";
    cin >> n;
    cout << "Enter " << n << " elements in array:- ";
    for(i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Enter element to search:- ";
    cin >> element;
    for(i=0; i<n; i++) {
        if(arr[i] == element) {
            cout << "Element found at index" << i << endl;
            check = 1;
            break;
        }
    }
    if(check == 0) {
        cout << "Element not found in array" << endl;
    }
    return 0;
}