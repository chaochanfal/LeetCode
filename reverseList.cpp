/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* cur = NULL, *pre = head;
        //建立2个指針,一个指向NULL,一个指向当前的头指針
        while (pre != NULL) {
            ListNode* t = pre->next;
            //用一个指針变量 temp 來保存pre->next 的 "点"
            pre->next = cur;
            //pre->next 指向了cur 相当于轉向
            cur = pre;
            //cur 变成pre 
            pre = t;
            //pre变成pre当时指向的next点
        }
        return cur;

    }
};
