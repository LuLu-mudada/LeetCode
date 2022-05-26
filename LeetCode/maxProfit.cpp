#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int p = 0;
		int min = INT_MAX;

		for (int i = 0; i < prices.size(); i++)
		{
			min = std::min(min, prices.at(i));
			p = std::max(p, prices.at(i) - min);
		}

		return p;
	}
};


int main463()
{
	Solution slt;
	vector<int> prices = { 7,6,4,3,1 };

	std::cout << slt.maxProfit(prices) << std::endl;
	
	std::cin.get();
	return 0;
}