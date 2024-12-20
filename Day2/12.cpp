#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int uniqueElement(const vector<int>& nums) {
    unordered_map<int, int> countMap;
    
    // Count occurrences of each number
    for (int num : nums) {
        countMap[num]++;
    }
    
    // Find the number with exactly one occurrence
    for (const auto& pair : countMap) {
        if (pair.second == 1) {
            return pair.first;
        }
    }
    
    return -1; // No unique element found
}

int main() {
    int n;
    cout << "Enter the size of the array --> ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    vector<int> nums(n);
    cout << "Enter the elements of the array -->" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = uniqueElement(nums);
    if (result != -1)
        cout << "UNIQUE ELEMENT: " << result << endl;
    else
        cout << "No UNIQUE ELEMENT found" << endl;

    return 0;
}
