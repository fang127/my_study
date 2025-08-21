/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution
{
public:
    int getSum(int n)
    {
        int sum = 0;
        while (n)
        {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n)
    {
        /*
        O(logn)
        */
        unordered_set<int> result;
        while (1)
        {
            int sum = getSum(n);
            if (sum == 1)
            {
                return true;
            }
            else
            {
                auto it = result.find(sum);
                if (it != result.end())
                {
                    return false;
                }
                else
                {
                    result.insert(sum);
                }
            }
            // 更新n
            n = sum;
        }
    }
};
// @lc code=end
