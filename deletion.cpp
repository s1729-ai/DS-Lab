#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[100];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter the position to delete the number (1-based index): ";
    int pos;
    cin >> pos;
    for (int i = pos - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}