/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        /*
            方法1
        */
        // 时间复杂度：O(n + nlogn)
        // 空间复杂度：O(1)
        // for (auto &i : nums)
        // {
        //     i *= i;
        // }
        // std::sort(nums.begin(), nums.end());
        // return nums;

        /*
            方法2
            // 时间：O(n)
            // 空间：O(1)
            */
        int k = nums.size() - 1;
        std::vector<int> result(k + 1, 0);
        for (int i = 0, j = nums.size() - 1; i <= j;)
        {
            if (nums[i] * nums[i] > nums[j] * nums[j])
            {
                result[k--] = nums[i] * nums[i];
                ++i;
            }
            else
            {
                result[k--] = nums[j] * nums[j];
                --j;
            }
        }
        return result;
    }
};
// @lc code=end
