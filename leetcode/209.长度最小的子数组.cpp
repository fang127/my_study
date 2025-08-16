/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int i = 0, j = 0;
        int length = 0, sum = 0;
        int result = INT32_MAX;
        for (; j < nums.size(); ++j)
        {
            sum += nums[j];
            while (sum >= target)
            {
                length = j - i + 1;
                sum -= nums[i++];
                result = result < length ? result : length;
            }
        }
        return result == INT32_MAX ? 0 : result;
    }
};
// @lc code=end
