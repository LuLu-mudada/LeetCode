#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	string minNumber(vector<int>& nums) {
		string s = "";
		vector<string> strs;
		for (auto n : nums)
		{
			strs.push_back(to_string(n));
		}

		sort(strs.begin(), strs.end(), compare);

		for (auto str : strs)
		{
			s += str;
		}
		return s;
	}

	static bool compare(string& a, string& b)
	{
		return a + b < b + a;
	}

};

int main56()
{
	//Solution slt;


	std::cin.get();
	return 0;
}