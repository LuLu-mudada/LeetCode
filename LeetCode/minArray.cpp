#include <iostream>
#include <vector>


class Solution {
public:
	int minArray(std::vector<int>& numbers) {
		int l = 0, r = numbers.size() - 1;
		int mid = 0;

		while (l < r)
		{
			mid = l + (r - l) / 2;

			if (numbers[mid] < numbers[r])
			{
				r = mid;
			}
			else if (numbers[mid] > numbers[r])
			{
				l = mid + 1;
			}
			else
			{
				r--;
			}
		}
		return numbers[l];
	}
};


int main534()
{
	Solution slt;
	std::vector<int> nums = { 3,1,1 };
	std::cout << slt.minArray(nums) << std::endl;


	std::cin.get();
	return 0;
}