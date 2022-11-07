
node* deletionAtPosition(node* head,int pos)
{
    if(head==NULL || head->next=NULL)
    {
        head=NUll;
    }
    else
    {
        int c=1;
        node* temp=head;
        while(c<pos-1)
        {
            temp=temp->next;
            c++;
        }
        node* t1=temp->next;
        temp->next=t1->next;
        t1->next=NULL;
        free(t1);
    }
    return head;
}
