#include <iostream>
#include <vector>
#include <string>

using namespace std;

//给定一个仅包含数字 2 - 9 的字符串，返回所有它能表示的字母组合。答案可以按 任意顺序 返回。
//
//给出数字到字母的映射如下（与电话按键相同）。注意 1 不对应任何字母。
//
//示例 1：
//
//输入：digits = "23"
//输出：["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"]
//示例 2：
//
//输入：digits = ""
//输出：[]
//示例 3：
//
//输入：digits = "2"
//输出：["a", "b", "c"]

class Solution {
private:
	vector<string> letterMaps;
	vector<string> res;
	string s;
public:
	vector<string> letterCombinations(string digits) {
		letterMaps.push_back("");	//0
		letterMaps.push_back("");	//1
		letterMaps.push_back("abc");	//2
		letterMaps.push_back("def");	//3
		letterMaps.push_back("ghi");	//4
		letterMaps.push_back("jkl");	//5
		letterMaps.push_back("mno");	//6
		letterMaps.push_back("pqrs");//7
		letterMaps.push_back("tuv");	//8
		letterMaps.push_back("wxyz");//9
		res.clear();
		s.clear();
		if (digits == "")
		{
			return res;
		}
		backtracking(digits, 0);
		return res;
	}

	void backtracking(string& digits, int index)
	{
		if (index == digits.size())
		{
			res.push_back(s);
			return;
		}
		string lettermap = letterMaps[(int)(digits[index] - '0')];
		for (int i = 0; i < lettermap.size(); ++i)
		{
			s.push_back(lettermap[i]);
			backtracking(digits, index + 1);
			s.pop_back();
		}
	}
};