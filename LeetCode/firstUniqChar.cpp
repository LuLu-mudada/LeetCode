#include <iostream>
#include <unordered_map>
#include <string>

class Solution {
public:
	char firstUniqChar(std::string s) {
		//int times[26] = { 0 };
		//for (char c : s)
		//{
		//	times[c - 'a']++;
		//}

		//for (char c : s)
		//{
		//	if (times[c - 'a'] == 1)
		//	{
		//		return c;
		//	}
		//}

		std::unordered_map<char, int> map;
		for (char c : s)
		{
			map[c]++;
		}
		for (char c : s)
		{
			if (map[c] == 1)
			{
				return c;
			}
		}


		return ' ';
	}
};

int main22()
{
	Solution slt;
	std::string str = "abaccdeff";
	std::cout << slt.firstUniqChar(str) << std::endl;

	std::cin.get();
	return 0;
}