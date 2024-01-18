
//Runtime: 12 ms, faster than 16.27% of C++ online submissions for Remove Duplicates from Sorted List.

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
        {
            return head;
        }
        ListNode* temp= head;
        while(temp->next != NULL)
        {
            if(temp->val == (temp->next)->val)
            {
                temp->next = (temp->next)->next;
            }
            else
            {
                temp = temp->next;
            }
        }
        
        return head;
        
    }
};
