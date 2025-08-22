/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */

// @lc code=start
class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        /*
        O(n);
        */
        // unordered_map<char, int> map;
        // for (auto &x : magazine)
        // {
        //     auto it = map.find(x);
        //     if (it != map.end())
        //     {
        //         ++it->second;
        //     }
        //     else
        //     {
        //         map.insert({x, 1});
        //     }
        // }

        // for (auto &x : ransomNote)
        // {
        //     auto it = map.find(x);
        //     if (it != map.end())
        //     {
        //         if (--it->second == 0)
        //         {
        //             map.erase(it);
        //         }
        //         continue;
        //     }
        //     else
        //     {
        //         return false;
        //     }
        // }
        // return true;
        if (magazine.size() < ransomNote.size())
        {
            return false;
        }

        int arr[26] = {0};
        for (auto &x : magazine)
        {
            ++arr[x - 'a'];
        }

        for (auto &x : ransomNote)
        {
            if (--arr[x - 'a'] < 0)
            {
                return false;
            }
        }

        return true;
    }
};
// @lc code=end
