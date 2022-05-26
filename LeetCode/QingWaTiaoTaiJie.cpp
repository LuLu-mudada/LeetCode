#include <iostream>

using namespace std;

class Solution {
public:
	int numWays(int n) {
		if (n == 0 || n == 1)
		{
			return 1;
		}

		int num0 = 1, num1 = 1;
		int res = 0;

		for (int i = 1; i < n; i++)
		{
			res = (num0 + num1) % 1000000007;
			num0 = num1;
			num1 = res;
		}

		return res;
	}
};


int main222()
{
	Solution slt;

	std::cout << slt.numWays(5) << std::endl;

	std::cin.get();
	return 0;
}