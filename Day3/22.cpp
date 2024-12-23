#include <iostream>
using namespace std;

void mergeSortedList(int arr[], int n, int arr2[], int m) {
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr[i] < arr2[j]) {
            cout << arr[i++] << " ";
        } else {
            cout << arr2[j++] << " ";
        }
    }
    while (i < n) {
        cout << arr[i++] << " ";
    }
    while (j < m) {
        cout << arr2[j++] << " ";
    }
}
int main() {
    int n, m;
    cout << "Enter the size of the first array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> m;
    int arr2[m];
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    cout << "Merged sorted list: ";
    mergeSortedList(arr, n, arr2, m);
    cout << endl;

    return 0;
}
