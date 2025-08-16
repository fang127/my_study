/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution
{
public:
    // 时间复杂度：O(n)
    // 空间复杂度：O(1)
    int removeElement(vector<int> &nums, int val)
    {
        int slow = 0, fast = 0;
        for (; fast < nums.size(); ++fast)
        {
            if (nums[fast] != val)
            {
                nums[slow++] = nums[fast];
            }
        }

        return slow;
    }
};
// @lc code=end
