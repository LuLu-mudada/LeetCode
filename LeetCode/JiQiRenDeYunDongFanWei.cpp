#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

class Solution {
public:
	int movingCount(int m, int n, int k) {
		vector<vector<int>> vt(m, vector<int>(n, 0));

		res = 0;

		backTracking(0,0,k,vt);

		return res;
	}

	void backTracking(int row, int col, int k, vector<vector<int>>& vt)
	{
		if (row < 0 || row >= vt.size() || col < 0 || col >= vt[0].size() || (row%10)+(row/10)+ (col % 10) + (col / 10) > k)
		{
			return ;
		}

		if (vt[row][col] == 1)
		{
			return ;
		}

		vt[row][col] = 1;
		//res = 1;

		backTracking(row-1, col, k, vt), backTracking(row, col-1, k, vt);
		backTracking(row + 1, col, k, vt), backTracking(row, col + 1, k, vt);
		res++;
	}

private:
	int res;
};


int main45645()
{
	Solution slt;

	std::cout << slt.movingCount(7,2,3) << std::endl;

	std::cin.get();
	return 0;
}