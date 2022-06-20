#include "singleLinkedList.h"
#include <iostream>

using namespace std;

//给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。
//输入：head = [1, 2, 3, 4, 5], n = 2
//输出：[1, 2, 3, 5]
//示例 2：
//
//输入：head = [1], n = 1
//输出：[]
//示例 3：
//
//输入：head = [1, 2], n = 1
//输出：[1]

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = new ListNode(0);
        temp->next = head;
        ListNode* res = temp;
        remove(temp, n);
        return res->next;
    }

    void remove(ListNode* t, int& n)
    {
        if (!t) return;
        //++nodeNum;
        remove(t->next, n);
        if (n == 0)
        {
            t->next = t->next->next;
            t->next->next = nullptr;
        }
        --n;
    }
};