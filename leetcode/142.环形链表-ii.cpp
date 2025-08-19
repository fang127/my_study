/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
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
    ListNode *detectCycle(ListNode *head)
    {
        /*
        时间复杂度：O(n)
        空间复杂度：O(1)
        */
        ListNode *fast = head; // 快指针
        ListNode *slow = head; // 慢指针
        while (fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next; // 快指针每次走两步
            slow = slow->next;       // 慢指针每次走一步
            if (fast == slow)        // 找到相遇节点，说明有环
            {
                ListNode *head01 = head;
                ListNode *head02 = fast;
                // 循环找环节点
                while (head01 != head02)
                {
                    head01 = head01->next;
                    head02 = head02->next;
                }
                return head01;
            }
        }
        return nullptr;
    }
};
// @lc code=end
