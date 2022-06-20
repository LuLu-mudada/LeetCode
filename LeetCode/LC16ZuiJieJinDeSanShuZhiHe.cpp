#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//给你一个长度为 n 的整数数组 nums 和 一个目标值 target。请你从 nums 中选出三个整数，使它们的和与 target 最接近。
//
//返回这三个数的和。
//
//假定每组输入只存在恰好一个解。
//
//示例 1：
//
//输入：nums = [-1, 2, 1, -4], target = 1
//输出：2
//解释：与 target 最接近的和是 2 (-1 + 2 + 1 = 2) 。
//示例 2：
//
//输入：nums = [0, 0, 0], target = 1
//输出：0


class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		if (nums.size() < 3) return 0;
		sort(nums.begin(), nums.end());
		int closestRes = nums[0] + nums[1] + nums[2];
		for (int i = 0; i < nums.size(); ++i)
		{
			int l = i + 1;
			int r = nums.size() - 1;
			while (l < r)
			{
				int sum = nums[i] + nums[l] + nums[r];
				if (compare_abs(target - closestRes, target - sum))
				{
					closestRes = sum;
				}
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
					return sum;
				}
			}
		}
		return closestRes;
	}
	bool compare_abs(int a, int b)
	{
		a = a < 0 ? -a : a;
		b = b < 0 ? -b : b;
		return a > b;
	}
};

int main236435643()
{
	vector<int> nums = { 1,2,4,8,16,32,64,128 };

	Solution slt;
	std::cout << slt.threeSumClosest(nums, 82) << std::endl;

	std::cin.get();
	return 0;
}