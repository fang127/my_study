/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        std::vector<std::vector<int>> result(n, std::vector<int>(n, 0));
        int loop = n / 2;           // 循环次数
        int startx = 0, starty = 0; // 起始位置和结束位置
        int mid = n / 2;            // 矩阵中间位置(n,n)
        int i, j;
        int count = 1;
        int offset = 1;
        while (loop--)
        {
            i = startx;
            j = starty;
            // 从左到右的边
            for (; j < n - offset; ++j)
            {
                result[i][j] = count++;
            }

            // 右列从上到下
            for (; i < n - offset; ++i)
            {
                result[i][j] = count++;
            }

            // 下行，从右到左
            for (; j > starty; --j)
            {
                result[i][j] = count++;
            }

            // 左列，从下到上
            for (; i > startx; --i)
            {
                result[i][j] = count++;
            }

            ++startx;
            ++starty;

            ++offset;
        }

        if (n & 1)
        {
            result[mid][mid] = count;
        }

        return result;
    }
};
// @lc code=end
