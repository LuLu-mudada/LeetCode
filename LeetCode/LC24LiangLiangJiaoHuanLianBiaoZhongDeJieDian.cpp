#include "singleLinkedList.h"

using namespace std;

//给你一个链表，两两交换其中相邻的节点，并返回交换后链表的头节点。你必须在不修改节点内部的值的情况下完成本题（即，只能进行节点交换）。
//
//示例 1：
//
//
//输入：head = [1, 2, 3, 4]
//输出：[2, 1, 4, 3]
//示例 2：
//
//输入：head = []
//输出：[]
//示例 3：
//
//输入：head = [1]
//输出：[1]

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head) return nullptr;
        ListNode* t = new ListNode(-1);
        t->next = head;
        ListNode* res = t;
        exchange(t);
        return res->next;
    }

    void exchange(ListNode* t)
    {
        if (!t || !t->next || !t->next->next) return;
        ListNode* r = t->next;
        t->next = t->next->next;
        r->next = r->next->next;
        t->next->next = r;
        exchange(t->next->next);
    }
};

