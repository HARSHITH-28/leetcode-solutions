// Last updated: 2/10/2026, 1:09:16 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    void reorderList(ListNode* head) {
14        ListNode *temp, *slow = head, *fast = head;
15        while (fast and fast->next) {
16            slow = slow->next;
17            fast = fast->next->next;
18        }
19        temp = head;
20        queue<ListNode*> q;
21        while (temp != slow) {
22            q.push(temp);
23            temp = temp->next;
24        }
25        ListNode *curr = slow, *prev = nullptr;
26        while (curr) {
27            ListNode* temp = curr->next;
28            curr->next = prev;
29            prev = curr;
30            curr = temp;
31        }
32        ListNode dummy(-1, nullptr);
33        ListNode* res = &dummy;
34        res->next = prev;
35        ListNode* headB = res;
36        while (!q.empty()) {
37            temp = headB->next;
38            headB->next = q.front();
39            q.pop();
40            headB->next->next = temp;
41            headB = temp;
42        }
43    }
44};