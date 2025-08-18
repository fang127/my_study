/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        /*
        时间复杂度：O(n)
        空间复杂度：O(1
        */
        ListNode *vhead = new ListNode(0);
        vhead->next = head;
        auto cur = vhead;

        while (cur->next != nullptr && cur->next->next != nullptr)
        {
            ListNode *temp01 = cur->next;             // 保存0
            ListNode *temp02 = cur->next->next->next; // 保存2
            cur->next = cur->next->next;              // 0-2
            cur->next->next = temp01;                 // 2-1
            temp01->next = temp02;                    // 1-3
            cur = cur->next->next;                    // cur前进
        }
        return vhead->next;
    }
};
// @lc code=end
