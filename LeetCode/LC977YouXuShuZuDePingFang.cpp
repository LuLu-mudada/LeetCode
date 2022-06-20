#include <iostream>
#include <vector>

using namespace std;

//给你一个按 非递减顺序 排序的整数数组 nums，返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序。
//
//示例 1：
//
//输入：nums = [-4, -1, 0, 3, 10]
//输出：[0, 1, 9, 16, 100]
//解释：平方后，数组变为[16, 1, 0, 9, 100]
//排序后，数组变为[0, 1, 9, 16, 100]
//示例 2：
//
//输入：nums = [-7, -3, 2, 3, 11]
//输出：[4, 9, 9, 49, 121]

class Solution {
public:
	vector<int> sortedSquares(vector<int>& nums) {
		vector<int> res(nums.size());
		int r = nums.size() - 1;
		int l = 0;
		for (int i = nums.size() - 1; i > -1; --i)
		{
			if (nums[l]*nums[l] > nums[r]*nums[r])
			{
				res[i] = nums[l++];
			}
			else
			{
				res[i] = nums[r--];
			}
		}
		return res;
	}
};

int main3546346e()
{
	vector<int> nums = { -1,0,3,5,9,12 };

	Solution slt;
	//std::cout << slt.removeElement(nums, 9) << std::endl;

	std::cin.get();
	return 0;
}