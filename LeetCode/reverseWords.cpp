#include <iostream>
#include <vector>
#include <deque>

using namespace std;

class Solution {
public:
	string reverseWords(string s) {
		if (s.empty())
		{
			return s;
		}
		deque<string> d;

		int fir = 0, sec = 0;
		while (sec < s.size())
		{
			if (s[sec++] != ' ')
			{
				fir = sec-1;
				while (s[sec] != ' ' && sec < s.size())
				{
					sec++;
				}
				d.push_front(s.substr(fir, sec - fir));
			}
		}
		string res = "";
		while (!d.empty())
		{
			res.append(d.front());
			d.pop_front();
			if (!d.empty())
			{
				res.append(" ");
			}
		}
		return res;
	}
};


int main234543()
{
	Solution slt;
	string s = "the sky is blue";

	std::cout << slt.reverseWords(s) << std::endl;

	std::cin.get();
	return 0;
}