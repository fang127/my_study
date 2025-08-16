/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int k = 0, j = nums.size() - 1;
        while (k <= j)
        {
            if (nums[j] == val)
            {
                --j;
                continue;
            }

            if (nums[k] == val)
            {
                nums[k] = nums[j];
                ++k;
                --j;
            }
            else
            {
                ++k;
            }
        }
        return k;
    }
};
// @lc code=end
