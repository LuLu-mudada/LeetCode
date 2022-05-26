#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int l = 0, r = nums.size() - 1;
		while (l < r)
		{
			if (nums[l] + nums[r] == target)
			{
				return { nums[l], nums[r] };
			}
			else if (nums[l] + nums[r] > target)
			{
				r--;
			}
			else
			{
				l++;
			}
		}
		return { 0,0 };
	}
};


int main3453()
{
	Solution slt;

	std::cin.get();
	return 0;
}