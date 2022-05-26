#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		vector<int> dp(nums.size());
		int res = nums[0];
		dp[0] = nums[0];
		for (int i = 1; i < nums.size(); i++)
		{
			dp[i] = std::max(nums[i], nums[i] + dp[i - 1]);
			res = std::max(res, dp[i]);
		}
		return res;
	}
};


int main2352454()
{
	Solution slt;
	vector<int> prices = { -1,-2 };

	std::cout << slt.maxSubArray(prices) << std::endl;

	std::cin.get();
	return 0;
}