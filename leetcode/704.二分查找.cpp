/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */

// @lc code=start
class Solution
{
public:
    // 时间复杂度：O(logn)
    // 空间复杂度：O(1)
    int search(vector<int> &nums, int target)
    {
        int i = 0, j = nums.size() - 1;
        while (i <= j)
        {
            int middle = i + (j - i) / 2;

            if (nums[middle] < target)
            {
                i = middle + 1;
            }
            else if (nums[middle] > target)
            {
                j = middle - 1;
            }
            else
            {
                return middle;
            }
        }
        return -1;
    }
};
// @lc code=end
