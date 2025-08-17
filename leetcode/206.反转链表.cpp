/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    ListNode *reverseList(ListNode *head)
    {
        /*
        时间复杂度: O(n)
        空间复杂度: O(1)
        */
        auto cur = head;
        ListNode *result_head = nullptr;
        ListNode *temp = nullptr;
        // 双指针法
        while (cur != nullptr)
        {
            temp = cur->next;
            cur->next = result_head;
            result_head = cur;
            cur = temp;
        }
        return result_head;
    }
};
// @lc code=end
