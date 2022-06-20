#include <iostream>
#include <string>
#include <vector>

using namespace std;

//
//����һ���ַ��� s���ҵ� s ����Ļ����Ӵ���
//ʾ�� 1��
//
//���룺s = "babad"
//�����"bab"
//���ͣ�"aba" ͬ���Ƿ�������Ĵ𰸡�
//ʾ�� 2��
//
//���룺s = "cbbd"
//�����"bb"
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