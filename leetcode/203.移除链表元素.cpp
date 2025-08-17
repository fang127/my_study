/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
    ListNode *removeElements(ListNode *head, int val)
    {
        /*
        时间复杂度: O(n)
        空间复杂度: O(1)
        */
        ListNode *virtual_head = new ListNode(0); // 创建一个虚拟头节点
        virtual_head->next = head;                // 让其指向头节点
        ListNode *cur = virtual_head;
        while (cur->next != nullptr)
        {
            if (cur->next->val == val)
            {
                ListNode *temp = cur->next;
                cur->next = cur->next->next;
                delete temp;
            }
            else
            {
                cur = cur->next;
            }
        }

        head = virtual_head->next;
        delete virtual_head;
        return head;
    }
};
// @lc code=end
