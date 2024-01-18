class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode* fh;
	ListNode* fk;
	
        ListNode* ft;

	if(list1==NULL )
	{
		return list2;
	}
        else if(list2 ==NULL)
        {
return list1;
        }
if(list1->val <= list2->val)
{
	fh= list1;
	list1=list1->next;
}
else
{
	fh= list2;
list2=list2->next;
}

fk=fh;
		while(list1 != NULL && list2 != NULL)
	{
		if(list1->val <= list2->val)
		{
			ft= list1;
			list1=list1->next;
			
		}
		else{
				ft= list2;
			list2=list2->next;
		}
		fh->next= ft;
		
		fh=ft;
	}

	if(list1==NULL)
	{
		fh->next= list2;
	}
	else if(list2==NULL)
	{
		fh->next= list1;
	}
return fk;
    }
};
