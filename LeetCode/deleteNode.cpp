#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* deleteNode(ListNode* head, int val) {
		if (!head)
		{
			return nullptr;
		}

		ListNode* temp = new ListNode(-1);
		temp->next = head;
		ListNode* res = temp;

		while (temp)
		{
			ListNode* ahead = temp;
			temp = temp->next;
			if (temp && temp->val == val)
			{
				ahead->next = temp->next;
				break;
			}
		}

		return res->next;
	}
};


int main2345()
{
	Solution slt;
	string str = "abcabcbb";

	//std::cout << slt.lengthOfLongestSubstring(str) << std::endl;

	std::cin.get();
	return 0;
}