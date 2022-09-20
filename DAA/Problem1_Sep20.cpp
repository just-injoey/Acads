
#include<iostream>
//#include<cstdlib>
using namespace std;

struct node {
    int data;
    struct node *left, *right;
};

struct node *newnode(int data) {
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}

struct node* insert(struct node *node, int data) {
    if(node==NULL) {
        return newnode(data);
    }
    else if(data<node->data) {
        node->left=insert(node->left,data);
    }
    else {
        node->right=insert(node->right, data);
    }
    return node;
}

void inorder(struct node *root) {
    if(root!=NULL) {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

void preorder(struct node *root) {
    if(root!=NULL) {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root) {
    if(root!=NULL) {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

int main() {
    struct node *root=NULL;
    int n,data;
    cin>>n;
    cin>>data;
    root=insert(root,data);
    for(int i=0; i<n; i++) {
        cin>>data;
        insert(root, data);
    }
    cout<<"Inorder: ";
    inorder(root);
    
    cout<<"\nPreorder: ";
    preorder(root);
    
    cout<<"\n Postorder: ";
    postorder(root);
    return 0;
}
