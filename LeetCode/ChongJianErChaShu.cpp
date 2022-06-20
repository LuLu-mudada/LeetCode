#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

 //Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* root = new TreeNode(preorder[0]);
        TreeNode* res = root;

    }

    TreeNode* rebuildTree(TreeNode* root, vector<int> preorder, vector<int> inorder)
    {
        if (preorder.size() == 1 && inorder.size() == 1)
        {
            TreeNode* t = new TreeNode(preorder[0]);
            return t;
        }

        root->left = rebuildTree(root->left, preorder, inorder);
        root->right = rebuildTree(root->right, preorder, inorder);
    }
};

int main567856856()
{
	Solution slt;

	std::cin.get();
	return 0;
}