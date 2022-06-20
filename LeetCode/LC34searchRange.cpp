#include "head.h"

//给定一个按照升序排列的整数数组 nums，和一个目标值 target。找出给定目标值在数组中的开始位置和结束位置。
//
//如果数组中不存在目标值 target，返回 [-1, -1]。
//
//进阶：
//
//你可以设计并实现时间复杂度为 O(log n) 的算法解决此问题吗？
//
//示例 1：
//
//输入：nums = [5, 7, 7, 8, 8, 10], target = 8
//输出：[3, 4]
//示例 2：
//
//输入：nums = [5, 7, 7, 8, 8, 10], target = 6
//输出：[-1, -1]
//示例 3：
//
//输入：nums = [], target = 0
//输出：[-1, -1]

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() < 1) return { -1,-1 };
        int first = -1, last = -1;
        int l = 0, r = nums.size() - 1;
        while (l < r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] >= target)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (nums[l] != target)
            return { -1,-1 };
        first = l;
        l = 0;
        r = nums.size() - 1;
        while (l < r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] <= target)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        last = r;
        return { first, last };
    }
};

int main34635wertwzxd()
{
    Solution slt;
    vector<int> nums = { 5,7,7,8,8,10 };
    vector<int> res = slt.searchRange(nums, 8);
    for (int a : res)
    {
        std::cout << a << " " << std::endl;
    }
    std::cin.get();
    return 0;
}