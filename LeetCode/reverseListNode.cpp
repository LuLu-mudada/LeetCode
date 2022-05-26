#include <iostream>
#include <stack>
#include <string>

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
 };
 /*
//ÊäÈë: s = "lrloseumgh", k = 6
//Êä³ö : "umghlrlose"

*/
class Solution {
public:
	std::string reverseLeftWords(std::string s, int n) {

		std::reverse(s.begin(), s.begin() + n);
		std::reverse(s.begin() + n, s.end());
		std::reverse(s.begin(), s.end());

		return s;
	}
};
int main1111()
{
	std::string str = "lrloseumgh";
	Solution slt;
	std::cout << slt.reverseLeftWords(str, 6) << std::endl;


    std::cin.get();
	return 0;
}