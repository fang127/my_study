/*
 * @lc app=leetcode.cn id=454 lang=cpp
 *
 * [454] 四数相加 II
 */

// @lc code=start
class Solution
{
public:
    int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
    {
        unordered_map<int, int> map;
        int sum = 0;
        for (auto &a : nums1)
        {
            for (auto &b : nums2)
            {
                sum = a + b;
                auto it = map.find(sum);
                if (it != map.end())
                {
                    it->second++;
                }
                else
                {
                    map.insert({sum, 1});
                }
            }
        }

        int temp = 0;
        int count = 0;
        for (auto &a : nums3)
        {
            for (auto &b : nums4)
            {
                temp = -(a + b);
                auto it = map.find(temp);
                if (it != map.end())
                {
                    count += it->second;
                }
            }
        }
        return count;
    }
};
// @lc code=end
