#include <iostream>

using namespace std;

int main() {
    int arr[100];
    int size, element=1, position=2, method;
    cout << "Enter Size of your array:- ";
    cin >> size;
    cout << "Enter " << size << " Elements in your array:- ";
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }
    cout << "You entered:- ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Choose your method to remove an element:- \n 1. By Element\n 2. By Position" << endl;
    cin >> method;

    if(method == 1) {
        cout << "Enter the element to remove:- ";
        cin >> element;
        int found = 0;
        for(int i=0; i<size; i++) {
            if(arr[i] == element) {
                for(int j=i; j<size-1; j++) {
                    arr[j] = arr[j+1];
                }
                size--;
                found = 1;
                break;
            }
        }
        if(!found) {
            cout << "Element not found" << endl;
        }
    } else if(method == 2) {
        cout << "Enter the index position to remove:- ";
        cin >> position;
        if(position >= 0 && position < size) {
            for(int i=position; i<size-1; i++) {
                arr[i] = arr[i+1];
            }
            size--;
        } else {
            cout << "Invalid position" << endl;
        }
    } else {
        cout << "Invalid method" << endl;
    }
    cout << "Array after deletion: ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}