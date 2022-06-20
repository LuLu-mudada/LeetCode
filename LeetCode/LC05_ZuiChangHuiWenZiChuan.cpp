#include <iostream>
#include <string>
#include <vector>

using namespace std;

//
//给你一个字符串 s，找到 s 中最长的回文子串。
//示例 1：
//
//输入：s = "babad"
//输出："bab"
//解释："aba" 同样是符合题意的答案。
//示例 2：
//
//输入：s = "cbbd"
//输出："bb"
//

class Solution {
public:
	string longestPalindrome(string s) {
		vector<vector<int>> dp(s.size(), vector<int>(s.size(), 0));
		int left = 0;
		int right = 0;
		int maxLength = 0;
		for (int i = s.size() - 1; i >= 0; --i)
		{
			for (int j = i; j < s.size(); ++j)
			{
				if (s[i] == s[j])
				{
					if (j - i <= 1)
					{
						dp[i][j] = true;
					}
					else if (i+1 <= j-1 && dp[i+1][j-1])
					{
						dp[i][j] = true;
					}
				}
				if (dp[i][j] && maxLength < j - i + 1)
				{
					right = j;
					left = i;
					maxLength = right - left + 1;
				}
			}
		}
		return s.substr(left, right - left + 1);
	}
};

int main46f6s8()
{
	string s = "babad";

	Solution slt;
	std::cout << slt.longestPalindrome(s) << std::endl;

	std::cin.get();
	return 0;
}