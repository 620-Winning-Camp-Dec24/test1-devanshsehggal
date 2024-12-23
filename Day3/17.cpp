#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int a = 0, b = 1, next;

    cout << "Fibonacci sequence: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        next = a + b; 
        a = b;
        b = next;
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        printFibonacci(n);
    }
    return 0;
}


