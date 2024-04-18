/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    ListNode* next1 = l1.next;
    ListNode* next2 = l1.next;
    int um[1000];
    int dois[1000];
    int i = 0;
    int len1 = 0;
    while(next1 != NULL){
        um[i] = next1.val;
        i++;
        len1 = i;
        next1 = next1.next;
    }
    int i = 0;
    int len2 = 0;
    while(next2 != NULL){
        dois[i] = next2.val;
        i++;
        len2 = i;
        next2 = next2.next;
    }
}