#include <iostream>
using namespace std;

int sumofNatural(int n){
    if(n==0){
        return 0;
    }
    return n+sumofNatural(n-1);
}
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Sum of first "<<num<<" natural numbers is: "<<sumofNatural(num)<<endl;
    return 0;
}