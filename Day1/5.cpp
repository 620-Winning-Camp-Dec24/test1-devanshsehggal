#include <iostream>
using namespace std;

int revNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;  
        reversed = reversed * 10 + digit;  
        n /= 10;
    }
    return reversed;
}

int main() {
    int num, rev;
    cout << "Enter any number: ";
    cin >> num;
    rev = revNumber(num);
    cout << "Reversed number: " << rev << endl;
    return 0;  
}


