
    2236. Root Equals Sum of Children
    you are given the root of a binary tree that consists of exactly 3 nodes: the root, its left child, and its right child.

    Input: root = [10,4,6]
    Output: true
    Explanation: The values of the root, its left child, and its right child are 10, 4, and 6, respectively.
    10 is equal to 4 + 6, so we return true.




## Solution-1

    class Solution {
    public:
     bool checkTree(TreeNode* root) {
         // Directly check if the root's value is equal to the sum of its children's values
        return root->val == (root->left->val + root->right->val);
     }
    };

## Solution-2

    int sum_leaf(TreeNode* root) {
    if (root == nullptr) return 0;
    // If the node is a leaf, return its value
    if (root->left == nullptr && root->right == nullptr) {
        return root->val;
    }
    // Recursively calculate the sum of the left and right subtrees
    return sum_leaf(root->left) + sum_leaf(root->right);
    }

    class Solution {
    public:
    bool checkTree(TreeNode* root) {
        // Calculate the sum of the leaf nodes
        int sum3 = sum_leaf(root->left) + sum_leaf(root->right);
        // Check if the root's value equals the sum of the leaf nodes
        return root->val == sum3;
    }
    };