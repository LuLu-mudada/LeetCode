#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

//给你一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0 ？请你找出所有和为 0 且不重复的三元组。
//
//注意：答案中不可以包含重复的三元组。
//
//示例 1：
//
//输入：nums = [-1, 0, 1, 2, -1, -4]
//输出： [[-1, -1, 2], [-1, 0, 1]]
//示例 2：
//
//输入：nums = []
//输出：[]
//示例 3：
//
//输入：nums = [0]
//输出：[]

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> res;
		if (nums.size() < 3) return res;
		//首先将所有的数升序排列
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size(); ++i)
		{
			if (nums[i] > 0) break;
			//第一个数去重
			if (i >= 1 && nums[i] == nums[i - 1])
			{
				continue;
			}
			//哈希set存第三个数
			unordered_set<int> set;
			//nums[j]是第二个数
			for (int j = i + 1; j < nums.size(); ++j)
			{
				//第二个数去重
				if (j > i + 2 && nums[j] == nums[j - 1] && nums[j - 1] == nums[j - 2])
				{
					continue;
				}
				int c = 0 - nums[i] - nums[j];
				if (set.find(c) != set.end())
				{
					res.push_back({ nums[i],nums[j],c });
					//第三个数去重
					set.erase(c);
				}
				else
				{
					set.insert(nums[j]);
				}
			}
		}
		return res;
    }
};

int mainryd57()
{
	vector<int> nums = { 2,3,1,2,4,3 };

	Solution slt;
	//std::cout << slt.minSubArrayLen(7, nums) << std::endl;

	std::cin.get();
	return 0;
}
