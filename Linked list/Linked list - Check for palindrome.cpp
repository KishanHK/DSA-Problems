#include <bits/stdc++.h>
using namespace std;

int Solution::lPalin(ListNode* A) {
        ListNode * slow = A;
        ListNode * fast = A;

        if(A==NULL || A->next==NULL) return 1; // returning true if num of nodes are 0 or 1

        if(A->next->next==NULL)
        {
                if(A->val == A->next->val) return 1; //if num of nodes are 2 checking palindrom or not
                else return 0;
        }

        while(fast->next!=NULL && fast->next->next!=NULL) //finding middile node of linkedlist
        {
                slow = slow->next;
                fast = fast->next->next;
        }

        ListNode*temp = reverse(slow->next); //reversing linked list after midpoint

        while(A!=NULL && temp!=NULL)
        {
                if(A->val != temp->val) return 0;
                A = A->next;
                temp=temp->next;
        }
        return 1;
}


int main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        return 0;
}
