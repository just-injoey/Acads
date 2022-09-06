// You are using GCC
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

int top = -1;

struct node{
    int data;
    struct node* next;
};


struct node* push(struct node* head, int data){
    if(top<=SIZE-1){
        top +=1;
        struct node* newNode = NULL;
        newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = NULL;
        
        if(head == NULL){
            head = newNode;
            return head;
        }
        
        newNode->next = head;
        head = newNode;
        
        return head;
    }
    else{
        printf("Overflow");
        return head;
    }
}

struct node* pop(struct node* head){
    struct node* temp = NULL;
    temp = head;
    head = head->next;
    free(temp);
    return head;
}

void display(struct node* head){
    if(top == -1){
        printf("Underflow");
        return;
    }
    printf("Stack: ");
    while(head != NULL){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}


int main(){
    int data;
    struct node* head = NULL;
    for(int i=0; i<SIZE; i++){
        scanf("%d", &data);    
        head = push(head,data);
    }
    display(head);
    head = pop(head);
    head = pop(head);
    display(head);
    return 0;
}
