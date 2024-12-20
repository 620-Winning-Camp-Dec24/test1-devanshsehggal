#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int majorityElement(const vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> countMap;
    for (int num : nums) {
        countMap[num]++;
        if (countMap[num] > (n / 2)) {
            return num;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of the array --> ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array -->" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int result = majorityElement(nums);
    if (result != -1)
        cout << "The majority element is " << result << endl;
    else
        cout << "No majority element found" << endl;

    return 0;
}
