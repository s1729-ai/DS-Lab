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
    cout << "Enter the number to be inserted: ";
    int x;
    cin >> x;
    cout << "Enter the position to insert the number (1-based index): ";
    int pos;
    cin >> pos;
    for (int i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos - 1] = x;
    cout << "Array after insertion: ";
    for (int i = 0; i <= n; i++) {
        cout << a[i] << " ";
    }
    

    return 0;
}