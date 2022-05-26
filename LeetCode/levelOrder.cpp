#include <iostream>
#include <vector>
#include <queue>
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
	vector<vector<int>> levelOrder(TreeNode* root) {
		if (root == nullptr) return {};

		vector<vector<int>> res;
		queue<TreeNode*> que;
		que.push(root);
		int lev = 1;

		while (!que.empty())
		{
			int size = que.size();
			vector<int> lev_nums;
			for (int i = 0; i < size; i++)
			{
				TreeNode* temp = que.front();
				lev_nums.push_back(temp->val);
				if (lev % 2 == 1)
				{
					if (temp->left != nullptr)
						que.push(temp->left);
					if (temp->right != nullptr)
						que.push(temp->right);
				}
				else
				{
					if (temp->right != nullptr)
						que.push(temp->right);
					if (temp->left != nullptr)
						que.push(temp->left);
				}
				que.pop();
			}
			lev++;
			res.push_back(lev_nums);
		}
		return res;
	}
};


int main123()
{
	Solution slt;

	std::cin.get();
	return 0;
}