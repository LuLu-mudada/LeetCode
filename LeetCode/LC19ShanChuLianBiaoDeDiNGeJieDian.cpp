#include "singleLinkedList.h"
#include <iostream>

using namespace std;

//����һ������ɾ������ĵ����� n ����㣬���ҷ��������ͷ��㡣
//���룺head = [1, 2, 3, 4, 5], n = 2
//�����[1, 2, 3, 5]
//ʾ�� 2��
//
//���룺head = [1], n = 1
//�����[]
//ʾ�� 3��
//
//���룺head = [1, 2], n = 1
//�����[1]

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