#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		if (s.size() == 1) return 1;

		int res = 0;
		int r = 0;
		unordered_set<char> set;
		int n = s.size();
		for (int i = 0; i < n; i++)
		{
			if (i != 0)
			{
				set.erase(s[i - 1]);
			}

			while (r < n && !set.count(s[r]))
			{
				set.insert(s[r]);
				r++;
			}
			res = std::max(res, r - i);
		}


		return res;
	}
};


int main433()
{
	Solution slt;
	string str = "abcabcbb";

	std::cout << slt.lengthOfLongestSubstring(str) << std::endl;

	std::cin.get();
	return 0;
}