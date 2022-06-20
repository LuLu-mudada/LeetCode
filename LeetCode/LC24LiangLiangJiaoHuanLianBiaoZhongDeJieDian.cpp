#include "singleLinkedList.h"

using namespace std;

//����һ���������������������ڵĽڵ㣬�����ؽ����������ͷ�ڵ㡣������ڲ��޸Ľڵ��ڲ���ֵ���������ɱ��⣨����ֻ�ܽ��нڵ㽻������
//
//ʾ�� 1��
//
//
//���룺head = [1, 2, 3, 4]
//�����[2, 1, 4, 3]
//ʾ�� 2��
//
//���룺head = []
//�����[]
//ʾ�� 3��
//
//���룺head = [1]
//�����[1]

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

