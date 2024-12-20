#include <iostream>
using namespace std;

int main(){
    int n;
    int sum;
    cout<<"enter value for n -->";
    cin>>n;
    sum = n*(n+1)/2;
    cout<<"Sum of natural numbers upto "<<n<<" = "<<sum; 
    return 0;
}