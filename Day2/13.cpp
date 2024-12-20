#include<iostream>
using namespace std;
  
class Node { 
public:
    int data; 
    Node* left; 
    Node* right; 
    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node* sortedArrayToBST(vector<int>& arr, int start, int end) {
    if(start > end) return nullptr;
    
    int mid = start + (end - start) / 2;
    
    Node* root = new Node(arr[mid]);
    
    root->left = sortedArrayToBST(arr, start, mid - 1);

    root->right = sortedArrayToBST(arr, mid + 1, end);
    return root;
}

Node* sortedArrayToBST(vector<int> &arr) {
    int n = arr.size();
    return sortedArrayToBST(arr, 0, n-1);
}

void printInorder(struct Node* node)
{
    if (node == nullptr)
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

int main(){
    
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
   
    Node* root = sortedArrayToBST(nums);
    printInorder(root);
    
    return 0;
}