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
	TreeNode* mirrorTree(TreeNode* root) {
        if (!root)
        {
            return nullptr;
        }

        return copyTree(root);
	}

    TreeNode* copyTree(TreeNode* root)
    {
        if (root == nullptr)
        {
            return nullptr;
        }

        TreeNode* res = new TreeNode(root->val);

        res->right = copyTree(root->left);
        res->left = copyTree(root->right);

        return res;
    }
};
