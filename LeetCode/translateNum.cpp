#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	int translateNum(int num) {
		if (num < 10) return 1;
		string t = std::to_string(num);
		int num0 = 1;
		int num1 = (t.at(0) == '1') || (t.at(0) == '2' && t.at(1) < '6') ? 2 : 1;
		int res = 0;
		for (int i = 1; i < t.size(); i++)
		{
			res = (t.at(i - 1) == '1') || (t.at(i - 1) == '2' && t.at(i) < '6') ? num1 + num0 : num1;
			num0 = num1;
			num1 = res;
		}

		return res;
	}
};


int main3456()
{
	Solution slt;

	std::cout << slt.translateNum(25) << std::endl;

	std::cin.get();
	return 0;
}