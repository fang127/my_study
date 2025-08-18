/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        /*
        时间复杂度: O(n)
        空间复杂度: O(1)
        */
        ListNode *fast = new ListNode(0);
        fast->next = head;
        auto vhead = fast;
        ListNode *slow = fast;
        // 移动fast
        while (n--)
        {
            fast = fast->next;
        }

        while (fast->next != nullptr)
        {
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;

        return vhead->next;
    }
};
// @lc code=end
