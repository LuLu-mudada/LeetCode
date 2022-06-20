#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//给你一个由 n 个整数组成的数组 nums ，和一个目标值 target 。请你找出并返回满足下述全部条件且不重复的四元组 [nums[a], nums[b], nums[c], nums[d]] （若两个四元组元素一一对应，则认为两个四元组重复）：
//
//0 <= a, b, c, d  < n
//	a、b、c 和 d 互不相同
//	nums[a] + nums[b] + nums[c] + nums[d] == target
//	你可以按 任意顺序 返回答案 。
//
//示例 1：
//
//输入：nums = [1, 0, -1, 0, -2, 2], target = 0
//输出： [[-2, -1, 1, 2], [-2, 0, 0, 2], [-1, 0, 0, 1]]
//示例 2：
//
//输入：nums = [2, 2, 2, 2, 2], target = 8
//输出： [[2, 2, 2, 2]]


class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		vector<vector<int>> res;
		if (nums.size() < 4) return res;
		sort(nums.begin(), nums.end());
		//int l = 0, r = nums.size()-1;
		for (int i = 0; i < nums.size() - 3; ++i)
		{
			//if (nums[i] > target) return res;
			if (i > 0 && nums[i] == nums[i - 1]) continue;
			for (int j = i + 1; j < nums.size() - 2; ++j)
			{
				//if (nums[i] + nums[j] > target) break;
				if (j > i + 1 && nums[j] == nums[j - 1]) continue;
				int l = j + 1;
				int r = nums.size() - 1;
				while (l < r)
				{
					if (l > j + 1 && nums[l] == nums[l - 1])
					{
						++l;
						continue;
					}
					if (r < nums.size() - 1 && nums[r] == nums[r + 1])
					{
						--r;
						continue;
					}
					long sum = (long)nums[i] + nums[j] + nums[l] + nums[r];
					if (sum > target)
					{
						--r;
					}
					else if (sum < target)
					{
						++l;
					}
					else
					{
						vector<int> t;
						t.push_back(nums[l]);
						t.push_back(nums[i]);
						t.push_back(nums[j]);
						t.push_back(nums[r]);
						res.push_back(t);
						++l, --r;
					}
				}
			}
		}
		return res;
	}
};