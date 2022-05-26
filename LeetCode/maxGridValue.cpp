#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int maxValue(vector<vector<int>>& grid) {
		int r = grid.size();
		int c = grid[0].size();
		if (r == 1 && c == 1)
		{
			return grid[0][0];
		}

		vector<vector<int>> dp(r + 1, vector<int>(c + 1));
		//dp[0][0] == grid[0][0];
		//dp[0][1] == dp[0][0] + grid[0][1];
		//dp[1][0] == dp[0][0] + grid[1][0];

		for (int i = 1; i < r + 1; i++)
		{
			for (int j = 1; j < c + 1; j++)
			{
				dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]) + grid[i - 1][j - 1];
			}
		}
		return dp[r][c];
	}
};


int main75676()
{
	Solution slt;
	vector<vector<int>> prices = { {1,3,1} ,	{1,5,1 },	{4, 2, 1} };

	std::cout << slt.maxValue(prices) << std::endl;

	std::cin.get();
	return 0;
}