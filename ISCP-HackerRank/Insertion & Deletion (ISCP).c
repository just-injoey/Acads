#include <stdio.h>
struct node
{
    int data;
    struct node* next;
}

struct node* insert_At_beginning(node* head, int val)
{
    node* newnode = (node*)malloc(sizeof(node));
    newnode->data = val;
    newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
    return head;
}

node* insert_At_end(node* head,int val)
{
    node* newnode = (node*)malloc(sizeof(node));
    newnode->data = val;
    newnode->next = NULL;  
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next= newnode;
        newnode->next = head;
        head = newnode;
    }
    return head;
}

node* insert_at_any_pos(node* head, int val, int pos)
{
    node* newnode = (node*)malloc(sizeof(node));
    newnode->data = val;
    newnode->next = NULL;  
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        node* temp = head;
        int c = 1;
        while(c < pos-1)
        {
            temp = temp->next;
            c++;
        }
        newnode->next = temp->next;
        temp->next= newnode;
    }
    return head;
}

node* delete_at_beginning(node* head)
{
    if(head == NULL || head->next == NULL)
    {
        head = NULL;
    }
    else
    {
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        free(temp);
    }
    return head;
}

node* delete_at_end(node* head)
{
    if(head == NULL || head->next == NULL)
    {
        head = NULL;
    }
    else
    {
        node* temp = head;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        node* t1 = temp->next; 
        temp->next = NULL;
        free(t1);
    }
    return head;
}

node* delete_at_any_pos(node* head, int pos)
{
    if(head == NULL || head->next == NULL)
    {
        head = NULL;
    }
    else
    {
        node* temp = head;
        int c = 1;
        while(c < pos-1)
        {
            temp = temp->next;
            c++;
        }
        node* t1 = temp->next; 
        temp->next = t1->next;
        t1->next = NULL
        free(t1);
    }
    return head;
}

int main() 
{
    
    return 0;
}