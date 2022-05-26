#include <iostream>

using namespace std;

//* Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	bool isSymmetric(TreeNode* root) {
        if (!root) return true;

        TreeNode* left = root->left;
        TreeNode* right = root->right;

        return compareTwo(left, right);
	}

    bool compareTwo(TreeNode* l, TreeNode* r)
    {
        if ((l == nullptr && r != nullptr) || (l != nullptr && r == nullptr))
            return false;
        if (l == nullptr && r == nullptr)
            return true;

        return l->val == r->val && compareTwo(l->left, r->right) && compareTwo(l->right, r->left);
    }
};