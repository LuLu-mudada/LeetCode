#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
		if (matrix.size() == 0) return false;

		int row = 0;
		int col = matrix[0].size() - 1;
		bool res = false;
		while (row < matrix.size() && col >= 0)
		{
			if (matrix[row][col] > target)
			{
				col--;
			}
			else if (matrix[row][col] < target)
			{
				row++;
			}
			else
			{
				res = true;
				break;
			}
		}
		return res;
	}
};


int main45()
{
	Solution slt;
	vector<vector<int>> vet = { {1,1} };
	std::cout << slt.findNumberIn2DArray(vet, 2) << std::endl;

	std::cin.get();
	return 0;
}