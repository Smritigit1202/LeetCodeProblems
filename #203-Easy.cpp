/*Runtime: 14 ms, faster than 78.09% of C++ online submissions for Remove Linked List Elements.
Memory Usage: 15.3 MB, less than 59.00% of C++ online submissions for Remove Linked List Elements.*/

class Solution {
        public:
            ListNode* removeElements(ListNode* head, int val) {
                ListNode* prev=head;
                 if(head ==NULL)
                {
                    return head;
                }
                while( prev!=NULL && prev->val ==val)
                {
                    prev= prev->next;
                }
                if(prev == NULL)
                {
                    return NULL;
                }
                ListNode* temp= prev;
                ListNode* k= prev;
                while((temp)!=NULL)
                {
                    if((temp->val) ==val)
                    {
                        prev->next=temp->next;
                    }
                    else{
                        prev= temp;
                    }
                    temp =(temp->next);
                }

                return k;
            }
        };
