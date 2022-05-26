#include <iostream>

using namespace std;

 //* Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if (!A || !B) return false;

        return findChildTree(A, B);
    }

    bool findChildTree(TreeNode* A, TreeNode* B)
    {
        if (A == nullptr)
        {
            return false;
        }

        if (A->val == B->val && jundgeChildTree(A, B))
        {
            return true;
        }

        return findChildTree(A->left, B) || findChildTree(A->right, B);
    }

    bool jundgeChildTree(TreeNode* A, TreeNode* B)
    {
        if (B == nullptr)
        {
            return true;
        }
        if (A == nullptr)
        {
            return false;
        }
        
        return (A->val == B->val) && jundgeChildTree(A->left, B->left) && jundgeChildTree(A->right, B->right);
    }
};
