#include <iostream>
#include <vector>
#include <string>

using namespace std;

//数字 n 代表生成括号的对数，请你设计一个函数，用于能够生成所有可能的并且 有效的 括号组合。
//
//示例 1：
//
//输入：n = 3
//输出：["((()))", "(()())", "(())()", "()(())", "()()()"]
//示例 2：
//
//输入：n = 1
//输出：["()"]


class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(res, 0, 0, "", n);
        return res;
    }

    void backtrack(vector<string>& res, int l, int r, string s, int n)
    {
        if (s.size() == n * 2)
        {
            res.push_back(s);
            return;
        }
        if (l < n)
        {
            s.push_back('(');
            backtrack(res, l + 1, r, s, n);
            s.pop_back();
        }
        if (r < l)
        {
            s.push_back(')');
            backtrack(res, l, r + 1, s, n);
            s.pop_back();
        }
        return;
    }
};

int main4t46()
{
    Solution slt;

    vector<string> res = slt.generateParenthesis(3);
    std::cout << "res.size = " << res.size() << std::endl;
    for (int i = 0; i < res.size(); i++)
    {
        std::cout << res[i] << std::endl;
    }

    std::cin.get();
    return 0;
}