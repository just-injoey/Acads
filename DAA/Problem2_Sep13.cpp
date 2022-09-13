// You are using GCC
#include <iostream>
#include <cstdlib>
using namespace std;



struct node{
    int data;
    struct node* next;
};

// struct node* head = NULL;

struct node* push(struct node* top, int data){
    struct node* temp = NULL;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    
    if(top == NULL){
        top = temp;
        return top;
    }
    
    temp->next = top;
    top = temp;
    return top;
}

void peek(struct node* top){
    cout<<"Top element is "<<top->data<<endl;
}

struct node* pop(struct node* top){
    struct node* temp = NULL;
    temp = top;
    top = top->next;
    free(temp);
    return top;
    
}

void display(struct node* top){
    while(top != NULL){
        cout<<top->data<<"-> ";
        top = top->next;
    }
    cout<<"\n";
}

int main(){
    int data;
    struct node* top = NULL;
    for(int i=0; i<5; i++){
        cin>>data;
        top = push(top, data);
    }
    display(top);
    peek(top);
    
    top = pop(top);
    top = pop(top);
    display(top);
    peek(top);
    return 0;
}



