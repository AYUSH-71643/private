#include <iostream>

using namespace std;

int main() {
    int arr[100], n, element, mid, beg, end, check=0;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter " << n << " elements in sorted order: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> element;
    beg = 0;
    end = n - 1;
    while(beg <= end) {
        mid = (beg + end) / 2;
        if(arr[mid] == element) {
            cout << "Element found at index " << mid << endl;
            check = 1;
            break;
        } else if(arr[mid] < element) {
            beg = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    if(check == 0) {
        cout << "Element not found in array" << endl;
    }
    return 0;
}