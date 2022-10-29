//How to get kth node from end of a singly linked list, without finding num of nodes. Note: Don't count the number of nodes.
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*next;
}*head=NULL;

void insertion(int x)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }

}

void display(struct node* head)
{
    struct node*top=head;
    while(top!=NULL)
    {
        cout<<top->data<<" ";
        top=top->next;
    }
}

void kthfromEnd(struct node* head, int k)
{
    struct node* fwd=head;
    struct node* ref=head;
    for(int i=0;i<k;i++)
    {
        fwd=fwd->next;
    }
    while(fwd!=NULL)
    {
        fwd=fwd->next;
        ref=ref->next;
    }
    cout<<"kth element is: "<<ref->data;

}

int main()
{
    int n,x,k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter data: "<<endl;
        cin>>x;
        insertion(x);
    }
    display(head);
    cout<<endl<<"Enter k: "<<endl;
    cin>>k;
    kthfromEnd(head,k);
    return 0;
}
