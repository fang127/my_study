/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        /*
        o(n)
        */
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); ++i)
        {
            int temp = target - nums[i];
            auto it = hash.find(temp);
            if (it != hash.end())
            {
                return {i, it->second};
            }
            else
            {
                hash.insert(pair(nums[i], i));
            }
        }
        return {};
    }
};
// @lc code=end
