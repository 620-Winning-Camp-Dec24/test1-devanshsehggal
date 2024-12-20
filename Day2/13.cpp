#include <iostream>
#include <vector>
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

Node* sortedArrayToBSTHelper(vector<int>& arr, int start, int end) {
    if (start > end) return nullptr;
    
    int mid = start + (end - start) / 2;
    Node* root = new Node(arr[mid]);
    
    root->left = sortedArrayToBSTHelper(arr, start, mid - 1);
    root->right = sortedArrayToBSTHelper(arr, mid + 1, end);
    
    return root;
}

Node* sortedArrayToBST(vector<int>& arr) {
    int n = arr.size();
    return sortedArrayToBSTHelper(arr, 0, n - 1);
}

void printInorder(Node* node) {
    if (node == nullptr)
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
   
    Node* root = sortedArrayToBST(nums);
    cout << "Inorder Traversal of the BST:" << endl;
    printInorder(root);
    
    return 0;
}
