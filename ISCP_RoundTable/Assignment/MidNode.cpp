//How to get the middle node of a single linked list without counting number of nodes. HINT: 2 pointer process, fast pointer and slow pointer. Note: Don't count the //number of nodes.
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
}*head=NULL;

void insertion(int x)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        struct node*end=head;
        while(end->next!=NULL)
        {
            end=end->next;
        }
        end->next=temp;
    }
}

void display(struct node* head)
{
    struct node* top=head;
    while(top!=NULL)
    {
        cout<<top->data<<" ";
        top=top->next;
    }
}

void midNode(struct node* head)
{
    struct node*fast=head;
    struct node*slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    cout<<"Middle Node is: "<<slow->data<<endl;
}

int main()
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter data: "<<endl;
        cin>>x;
        insertion(x);
    }
    display(head);
    midNode(head);
    return 0;
}
