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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> ls1, ls2;
        while (l1) {
            ls1.push(l1->val);
            l1 = l1->next;
        }
        while (l2) {
            ls2.push(l2->val);
            l2 = l2->next;
        }
        int carry = 0; ListNode *r = NULL, *p = r;
        while (!ls1.empty() || !ls2.empty() || carry) {
            int a = ls1.empty() ? 0 : ls1.top(), b = ls2.empty() ? 0 : ls2.top();
            int sum = a + b + carry;
            p = new ListNode(sum % 10);
            p->next = r;
            r = p;
            carry = sum / 10;
            if (!ls1.empty()) ls1.pop();
            if (!ls2.empty()) ls2.pop();
        }
        return r;
    }
};