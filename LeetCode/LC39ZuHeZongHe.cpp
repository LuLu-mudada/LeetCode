#include "head.h"

//给你一个 无重复元素 的整数数组 candidates 和一个目标整数 target ，找出 candidates 中可以使数字和为目标数 target 的 所有 不同组合 ，并以列表形式返回。你可以按 任意顺序 返回这些组合。
//
//candidates 中的 同一个 数字可以 无限制重复被选取 。如果至少一个数字的被选数量不同，则两种组合是不同的。 
//
//对于给定的输入，保证和为 target 的不同组合数少于 150 个。
//
//示例 1：
//
//输入：candidates = [2, 3, 6, 7], target = 7
//输出： [[2, 2, 3], [7]]
//解释：
//2 和 3 可以形成一组候选，2 + 2 + 3 = 7 。注意 2 可以使用多次。
//7 也是一个候选， 7 = 7 。
//仅有这两种组合。
//示例 2：
//
//输入 : candidates = [2, 3, 5], target = 8
//输出 : [[2, 2, 2, 2], [2, 3, 3], [3, 5]]
//示例 3：
//
//输入 : candidates = [2], target = 1
//输出 : []

class Solution {
public:
    vector<vector<int>> res;
    vector<int> cur;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        res.clear();
        cur.clear();
        if (candidates.size() < 1) return res;
        search(candidates, target, 0, 0);
        return res;
    }

    void search(vector<int>& nums, int target, int sum, int index)
    {
        if (sum > target) return;
        if (sum == target)
        {
            res.push_back(cur);
            return;
        }
        for (int i = index; i < nums.size(); i++)
        {
            sum += nums[i];
            cur.push_back(nums[i]);
            search(nums, target, sum, i);
            sum -= nums[i];
            cur.pop_back();
        }
    }
};

int main()
{
    vector<vector<int>> res;
    vector<int> nums = { 2,3,6,7 };
    Solution slt;
    res = slt.combinationSum(nums, 7);

    for (int i = 0; i < res.size(); ++i)
    {
        for (int j = 0; j < res[0].size(); ++j)
        {
            std::cout << res[i][j] << " ";
        }
        std::cout << endl;
    }
    std::cin.get();
    return 0;
}