//Delete all elements which are repeated in a sorted list. Don't even have one value of that value!!
#include<iostream>
using namespace std;


    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* c = new ListNode(-1000);
        c->next = head;
        ListNode* temp = c;
        while(temp&&temp->next&&temp->next->next){
            if(temp->next->val == temp->next->next->val){
                ListNode* t = temp->next;
                while( (t&&t->next) && (t->val == t->next->val) ){
                    t = t->next;
                }
                t = t->next;
                temp->next = t;
            }
            else
                temp = temp->next;
        }
        return c->next;
    }