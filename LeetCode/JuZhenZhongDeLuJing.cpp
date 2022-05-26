#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

class Solution {
public:
	bool exist(vector<vector<char>>& board, string word) {
		if (board.empty())
		{
			return false;
		}

		m_rows = board.size();
		m_cols = board[0].size();
		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				if (backTracking(i,j,0,board,word))
				{
					return true;
				}
			}
		}
		return false;
	}

	bool backTracking(int row, int col, int n, vector<vector<char>>& board, string& word)
	{
		if (n == word.size())
		{
			return true;
		}

		if (row < 0 || row >= m_rows || col < 0 || col >= m_cols || board[row][col] != word[n])
		{
			return false;
		}

		//string t = std::to_string(row) + std::to_string(col);
		//if (set.count(t))
		//{
		//	return false;
		//}
		//set.insert(t);
		board[row][col] = '\0';

		bool res = (backTracking(row + 1, col, n + 1, board, word) || backTracking(row, col + 1, n + 1, board, word)
			|| backTracking(row - 1, col, n + 1, board, word) || backTracking(row, col - 1, n + 1, board, word));

		board[row][col] = word[n];
		return res;
	}
private:
	int m_rows, m_cols;
};


int main5763()
{
	Solution slt;
	string s = "ABCESEEEFS";
	vector<vector<char>> board = { {'A', 'B', 'C', 'E'}, {'S', 'F', 'E', 'S'}, {'A', 'D', 'E', 'E'} };

	string t = std::to_string(0) + std::to_string(1);

	std::cout << slt.exist(board, s) << std::endl;
	//std::cout << t << std::endl;

	std::cin.get();
	return 0;
}