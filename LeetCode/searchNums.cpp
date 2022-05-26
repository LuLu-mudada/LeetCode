#include <iostream>
#include <vector>

class Solution 
{
public:
	int search(std::vector<int>& nums, int target) 
	{
		int res = 0;
		int l, r;
		int mid;
		l = 0;
		r = nums.size() - 1;
		while (l < r)
		{
			mid = l + (r - l) / 2;
			if (nums[mid] >= target)
			{
				r = mid - 1;
			}
			if (nums[mid] < target)
			{
				l = mid + 1;
			}
		}

		while (l < nums.size() && nums[l] == target)
		{
			res++;
			l++;
		}

		return res;
	}
};

int main2352()
{
	Solution slt;
	std::vector<int> nums = { 1,2,3 };
	std::cout << slt.search(nums, 2) << std::endl;

	std::cin.get();

	return 0;
}