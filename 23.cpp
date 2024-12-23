#include <iostream>
using namespace std;

int lastRemaining(int n) {
    int head = 1;
    int step = 1;
    int remaining = n;
    bool leftToRight = true;

    while (remaining > 1) {
        if (leftToRight || remaining % 2 == 1) {
            head += step;
        }
        step *= 2;
        remaining /= 2;
        leftToRight = !leftToRight;
    }

    return head;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The last remaining number is: " << lastRemaining(n) << endl;
    return 0;
}
