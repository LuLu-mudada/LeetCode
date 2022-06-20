#include <iostream>
#include <vector>

using namespace std;

//给定一个含有 n 个正整数的数组和一个正整数 target 。
//
//找出该数组中满足其和 ≥ target 的长度最小的 连续子数组 [numsl, numsl + 1, ..., numsr - 1, numsr] ，并返回其长度。如果不存在符合条件的子数组，返回 0 。
//
//示例 1：
//
//输入：target = 7, nums = [2, 3, 1, 2, 4, 3]
//输出：2
//解释：子数组 [4, 3] 是该条件下的长度最小的子数组。
//示例 2：
//
//输入：target = 4, nums = [1, 4, 4]
//输出：1
//示例 3：
//
//输入：target = 11, nums = [1, 1, 1, 1, 1, 1, 1, 1]
//输出：0

class Solution {
public:
	int minSubArrayLen(int target, vector<int>& nums) {
		int s = 0;
		int sum = 0;
		int res = INT_MAX;
		for (int f = 0; f < nums.size(); ++f)
		{
			sum += nums[f];
			while (s <= f)
			{
				if (sum >= target)
				{
					res = min(res, f - s + 1);
				}
				else
				{
					break;
				}
				sum -= nums[s++];
			}
		}
		return res == INT_MAX ? 0 : res;
	}
};

int main6eyr5()
{
	vector<int> nums = { 2,3,1,2,4,3 };

	Solution slt;
	std::cout << slt.minSubArrayLen(7, nums) << std::endl;

	std::cin.get();
	return 0;
}