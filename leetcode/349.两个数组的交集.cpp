/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        std::unordered_set<int> hash(nums1.begin(), nums1.end());
        std::unordered_set<int> temp;
        for (auto &i : nums2)
        {
            if (hash.find(i) != hash.end())
            {
                temp.insert(i);
            }
        }

        return vector<int>(temp.begin(), temp.end());
    }
};
// @lc code=end
