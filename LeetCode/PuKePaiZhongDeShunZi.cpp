#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	bool isStraight(vector<int>& nums) {
		int zeroCount = 0, diffCount = 0;
		std::sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size() - 1; i++)
		{
			if (nums[i] == 0)
			{
				zeroCount++;
			}
			else
			{
				if (nums[i] == nums[i+1])
				{
					return false;
				}
				else
				{
					diffCount += nums[i + 1] - nums[i] - 1;
				}
			}
		}
		return zeroCount >= diffCount;
	}
};

int main367e56()
{
	Solution slt;
	vector<int> nums = { 0,0,1,2,5 };

	std::cout << slt.isStraight(nums) << std::endl;
	std::cin.get();
	return 0;
}