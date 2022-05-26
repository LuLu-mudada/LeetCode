#include <iostream>
#include <unordered_set>
#include <string>
#include <stack>

class Solution {
public:
	int lengthOfLongestSubstring(std::string s) {
		std::unordered_set<char> set;
		int res = 0, right = 0;
		int n = s.size();
		for (int i = 0; i < n; i++)
		{
			if (i != 0)
			{
				set.erase(s[i - 1]);
			}
			
			while (right < n && !set.count(s[right]))
			{
				set.insert(s[right]);
				right++;
			}

			res = std::max(res, right - i);
		}
		return res;
	}
};

class CQueue {
public:
	std::stack<int> tail;
	std::stack<int> head;
	CQueue() {

	}

	void appendTail(int value) {
		while (!head.empty())
		{
			tail.push(head.top());
			head.pop();
		}
		tail.push(value);
	}

	int deleteHead() {
		if (tail.empty() && head.empty())
			return -1;

		while (!tail.empty())
		{
			head.push(tail.top());
			tail.pop();
		}
		int temp = head.top();
		head.pop();
		return temp;
	}
};


int main11()
{
	//Solution slt;
	//std::string str = "abcabcbb";

	//std::cout << slt.lengthOfLongestSubstring(str) << std::endl;

	CQueue cqueue;

	std::cout << cqueue.deleteHead() << std::endl;
	cqueue.appendTail(3);
	std::cout << cqueue.deleteHead() << std::endl;
	std::cout << cqueue.deleteHead() << std::endl;
	std::cout << cqueue.deleteHead() << std::endl;


	std::cin.get();
	return 0;
}