#include <bits/stdc++.h>
using namespace std;
void traverse(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertAt(int arr[], int &n, int pos, int val) {
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position!" << endl;
        return;
    }

    int shiftCount = 0; // count the number of shifts

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
        shiftCount++;
    }

    arr[pos - 1] = val;
    n++;

    cout << "Inserted successfully!" << endl;
    cout << "Total shifts during insertion = " << shiftCount << endl;
}
void deleteAt(int arr[], int &n, int pos) {
    if (pos < 1 || pos > n) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "Deleted successfully!" << endl;
}

int main() {
    int arr[100], n, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n--- Menu ---";
        cout << "\n1. Traverse (Display)";
        cout << "\n2. Insert at position";
        cout << "\n3. Delete from position";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                traverse(arr, n);
                break;

            case 2: {
                int pos, val;
                cout << "Enter position to insert (1-based): ";
                cin >> pos;
                cout << "Enter value to insert: ";
                cin >> val;
                insertAt(arr, n, pos, val);
                break;
            }

            case 3: {
                int pos;
                cout << "Enter position to delete (1-based): ";
                cin >> pos;
                deleteAt(arr, n, pos);
                break;
            }

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}