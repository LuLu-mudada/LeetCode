#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

//Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* getKthFromEnd(ListNode* head, int k) {
		ListNode* fast = head;
		ListNode* slow = head;
		for (int i = 0; i < k; i++)
		{
			fast = fast->next;
		}
		while (fast)
		{
			fast = fast->next;
			slow = slow->next;
		}
		return slow;
	}
};


int main3456365()
{
	Solution slt;

	std::cin.get();
	return 0;
}