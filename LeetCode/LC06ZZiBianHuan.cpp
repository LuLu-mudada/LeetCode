#include <iostream>
#include <string>
#include <vector>

using namespace std;

//
//将一个给定字符串 s 根据给定的行数 numRows ，以从上往下、从左到右进行 Z 字形排列。
//比如输入字符串为 "PAYPALISHIRING" 行数为 3 时，排列如下：
//
//P   A   H   N
//A P L S I I G
//Y   I   R
//之后，你的输出需要从左往右逐行读取，产生出一个新的字符串，比如："PAHNAPLSIIGYIR"。
//
//请你实现这个将字符串进行指定行数变换的函数：
//
//string convert(string s, int numRows);
//

class Solution {
public:
	string convert(string s, int numRows) {
		if (s.size() <= 1 || numRows <= 1) return s;
		//每一行一个字符串，最后把这些字符串拼接起来
		vector<string> strs(numRows);
		string res = "";
		int x = 0;
		//flag用来控制向上还是向下扫描
		int flag = -1;
		for (int i = 0; i < s.size(); ++i)
		{
			strs[x] += s[i];
			if (x == 0 || x == numRows - 1)
			{
				flag = -flag;
			}
			x += flag;
		}
		for (auto& str : strs)
		{
			res += str;
		}
		return res;
	}
};
int main7564646()
{
	string s = "PAYPALISHIRING";

	Solution slt;
	std::cout << slt.convert(s, 3) << std::endl;

	std::cin.get();
	return 0;
}