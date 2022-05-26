#include <iostream>
#include <vector>

using namespace std;

/*Definition for a binary tree node.*/
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
	vector<vector<int>> pathSum(TreeNode* root, int target) {
        vector<vector<int>> res;
        if (root->val > target)
        {
            return res;
        }
        vector<int> t;
        dfs(0, target, root, t, res);

        return res;
	}

    void dfs(int sum, int target, TreeNode* tree, vector<int>& vt, vector<vector<int>>& res)
    {
        if (!tree || sum > target)
        {
            return;
        }

        sum += tree->val;
        vt.push_back(tree->val);
        if (sum == target && !tree->left && !tree->right)
        {
            res.push_back(vt);
        }

        dfs(sum, target, tree->left, vt, res);
        dfs(sum, target, tree->right, vt, res);

        vt.pop_back();
    }

};
int main4378673()
{
	//Solution slt;


	std::cin.get();
	return 0;
}