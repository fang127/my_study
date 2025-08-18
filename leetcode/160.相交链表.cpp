/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        /*
        时间复杂度：O(n + m)
        空间复杂度：O(1)
        */
        // 双指针
        ListNode *ptr01 = headA;
        ListNode *ptr02 = headB;

        // 获取两个链表个数
        int len01 = 0, len02 = 0;
        while (ptr01 != nullptr)
        {
            len01++;
            ptr01 = ptr01->next;
        }
        while (ptr02 != nullptr)
        {
            len02++;
            ptr02 = ptr02->next;
        }
        ptr01 = headA;
        ptr02 = headB;
        // 让ptr01为最长链表的头，len01为其长度
        if (len02 > len01)
        {
            std::swap(len01, len02);
            std::swap(ptr01, ptr02);
        }
        // 求长度差
        int gap = len01 - len02;
        // 让curA和curB在同一起点上（末尾位置对齐）
        while (gap--)
        {
            ptr01 = ptr01->next;
        }
        // 遍历curA 和 curB，遇到相同则直接返回
        while (ptr01 != nullptr)
        {
            if (ptr01 == ptr02)
            {
                return ptr01;
            }
            ptr01 = ptr01->next;
            ptr02 = ptr02->next;
        }

        return 0;
    }
};
// @lc code=end
