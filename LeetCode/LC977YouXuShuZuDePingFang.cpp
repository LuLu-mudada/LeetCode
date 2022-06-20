#include <iostream>
#include <vector>

using namespace std;

//����һ���� �ǵݼ�˳�� ������������� nums������ ÿ�����ֵ�ƽ�� ��ɵ������飬Ҫ��Ҳ�� �ǵݼ�˳�� ����
//
//ʾ�� 1��
//
//���룺nums = [-4, -1, 0, 3, 10]
//�����[0, 1, 9, 16, 100]
//���ͣ�ƽ���������Ϊ[16, 1, 0, 9, 100]
//����������Ϊ[0, 1, 9, 16, 100]
//ʾ�� 2��
//
//���룺nums = [-7, -3, 2, 3, 11]
//�����[4, 9, 9, 49, 121]

class Solution {
public:
	vector<int> sortedSquares(vector<int>& nums) {
		vector<int> res(nums.size());
		int r = nums.size() - 1;
		int l = 0;
		for (int i = nums.size() - 1; i > -1; --i)
		{
			if (nums[l]*nums[l] > nums[r]*nums[r])
			{
				res[i] = nums[l++];
			}
			else
			{
				res[i] = nums[r--];
			}
		}
		return res;
	}
};

int main3546346e()
{
	vector<int> nums = { -1,0,3,5,9,12 };

	Solution slt;
	//std::cout << slt.removeElement(nums, 9) << std::endl;

	std::cin.get();
	return 0;
}