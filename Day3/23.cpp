// #include <iostream>
// using namespace std;

// int lastRemaining(int n) {
//     int head = 1;
//     int step = 1;
//     int remaining = n;
//     bool leftToRight = true;

//     while (remaining > 1) {
//         if (leftToRight || remaining % 2 == 1) {
//             head += step;
//         }
//         step *= 2;
//         remaining /= 2;
//         leftToRight = !leftToRight;
//     }

//     return head;
// }

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout << "The last remaining number is: " << lastRemaining(n) << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int del(int arr[], int n){
    bool leftRight=true;
    while(n>1){
        if(leftRight){
            for(int i=0; i<n;i=i+2){
            arr[i]=0;
            }
        }
        else{
        for(int i=n-1; i>=0;i=i-2){
        arr[i]=0;
       }
    }
        int temp=0;
        for(int i=1; i<n;i++){
        if(arr[i]!=0){
         arr[temp++]=arr[i];   
        }
       }
       n=temp;
       leftRight=!leftRight;
    }
    return arr[0];
}
int main() {
    int n;
    cout<<"Enter last digit: ";
    cin>>n;
    
    int arr[1000];
    for(int i=0; i<n;i++){
        arr[i]=i+1;
    }
    
    cout<<"The remaining element is "<<del(arr,n)<<endl;
    
    return 0;
}