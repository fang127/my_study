/*
 * @lc app=leetcode.cn id=707 lang=cpp
 *
 * [707] 设计链表
 */

// @lc code=start
class MyLinkedList
{
public:
    struct ListNode
    {
        ListNode(int val_) : val(val_), next(nullptr) {}
        int val;
        ListNode *next;
    };

    MyLinkedList()
    {
        virtual_head = new ListNode(0);
        size = 0;
    }

    int get(int index)
    {
        auto cur = virtual_head->next;
        if (index < 0 || index > size - 1)
        {
            return -1;
        }

        while (index--)
        {
            cur = cur->next;
        }
        return cur->val;
    }

    void addAtHead(int val)
    {
        ListNode *head = new ListNode(val);
        // 一定要注意顺序
        head->next = this->virtual_head->next;
        this->virtual_head->next = head;
        ++size;
    }

    void addAtTail(int val)
    {
        int i = this->size;
        auto cur = this->virtual_head;
        // 找到尾部节点
        while (i != 0)
        {
            cur = cur->next;
            --i;
        }
        ListNode *temp = new ListNode(val);
        cur->next = temp;
        ++size;
    }

    void addAtIndex(int index, int val)
    {
        if (index > size)
        {
            return;
        }

        index = index < 0 ? 0 : index;

        auto cur = this->virtual_head;
        while (index != 0)
        {
            cur = cur->next;
            --index;
        }
        ListNode *temp = new ListNode(val);
        temp->next = cur->next;
        cur->next = temp;
        ++size;
    }

    void deleteAtIndex(int index)
    {
        if (index >= size || index < 0)
        {
            return;
        }

        auto cur = this->virtual_head;
        while (index != 0)
        {
            cur = cur->next;
            --index;
        }
        auto temp = cur->next;
        cur->next = cur->next->next;
        delete temp;
        temp = nullptr;
        --size;
    }

private:
    ListNode *virtual_head; // 虚拟头节点
    int size;               // 链表长度
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end
