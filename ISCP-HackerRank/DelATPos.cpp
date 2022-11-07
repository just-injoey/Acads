#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*next;
}*head=NULL;

void InsertPos(int pos,int x)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else if(pos==0)
    {
        temp->next=head;
        head=temp;
    }
    else
    {
        struct node*top=head;
        int curr=0;
        while(curr < pos-1)
        {
            top=top->next;
            curr++;
        }
        temp->next=top->next;
        top->next=temp;
        // top->next=temp;
    }
}

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

void display(struct node*head)
{
    struct node*temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,del;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,loc;
        cin>>loc>>x;
        InsertPos(loc,x);
    }
    cin >> del;
    deletionAtPosition(head,del);
    display(head);
    return 0;
}
