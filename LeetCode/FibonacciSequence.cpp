#include <iostream>

using namespace std;

class Solution {
public:
	int fib(int n) {
		if (n == 0)
		{
			return 0;
		}
		if (n == 1)
		{
			return 1;
		}

		int res = 0;
		int num0 = 0, num1 = 1;
		for (int i = 1; i < n; i++)
		{
			res = (num0 + num1) % 1000000007;
			num0 = num1;
			num1 = res;
		}

		return res;
	}
};


int main86()
{
	Solution slt;

	std::cout << slt.fib(5) << std::endl;

	std::cin.get();
	return 0;
}