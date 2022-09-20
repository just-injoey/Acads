// You are using GCC
#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *left, *right;
};

struct node* newnode(int data){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* insert(struct node* node, int data){
    if(node == NULL){
        return newnode(data);
    }
    else if(data < node->data){
        node->left = insert(node->left, data);
    }
    else{
        node->right = insert(node->right, data);
    }
    return node;
}
void search(struct node* root, int data){
    if(root->data == data){
        cout<<data<<" is present in the BST";
        return;
    }
    if(root->left==NULL && root->right==NULL && root->data != data){
        cout<<data<<" is not present in the BST";
        return;
    }
    else if(data < root->data){
        search(root->left, data);
    }
    else{
        search(root->right, data);
    }
}



int main(){
    struct node* root = NULL;
    int n,data;
    cin>>n;
    // cin>>data;
    // root = insert(root,data);
    for(int i=0; i<n; i++){
        cin>>data;
        root = insert(root, data);
    }
    int key;
    cin>>key;
    search(root,key);
    
    return 0;
}
