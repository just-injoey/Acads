// You are using GCC
#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
    int coeff;
    int power;
    struct node* next;
};

struct node* insertAtEnd(struct node* head, int coeff, int power){
    struct node* temp = NULL;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->coeff = coeff;
    temp->power = power;
    temp->next = NULL;
    
    if(head==NULL){
        head = temp;
        return head;
    }
    struct node* ptr = NULL;
    ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;
    return head;
}


void displayLL(struct node* head){
    while(head!=NULL){
        if(head->power==0){
            cout<<head->coeff<<"x^"<<head->power;
            return;
        }
        cout<<head->coeff<<"x^"<<head->power<<" + ";
        head = head->next;
    }    
}

int main(){
    struct node* head = NULL;
    
    int degree, coeff, power;
    cin>>degree;
    
    for(int i=degree; i>=0; i--){
        cin>>coeff;
        cin>>power;
        head = insertAtEnd(head,coeff,power);
    }
    displayLL(head);
    
    return 0;
}
