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
int getListLength(ListNode *head){
int count=0;
while(head!=nullptr){
    head=head->next;
    count++;
}
return count;
}



ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
int lenA= getListLength(headA);
int lenB=getListLength(headB);

while( lenA>lenB){
    lenA--;
    headA=headA->next;
}

while(lenB>lenA){
    lenB--;
    headB=headB->next;
}

// now both are from the same distance from intersection

while( headA!=headB){
    headA=headA->next;
    headB=headB->next;
}
 return headB;



    }
};