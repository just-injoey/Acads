#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *left, *right;
};

struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}
struct node *minvalue(struct node *node) {
  struct node *current = node;

  // Find the leftmost leaf
  while (current && current->left != NULL)
    current = current->left;

  return current;
}

struct node *insert(struct node *node, int key) {
  if (node == NULL) return newNode(key);

  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}

void preorder(struct node*root)
{
    if(root!=NULL)
    {
        preorder(root->left);
        printf("%d ",root->key);
        
        preorder(root->right);
    }
}
struct node *deleteNode(struct node *root, int key) {
  if (root == NULL)
  { 
    return root;
  }

  if (key < root->key)
  {
    root->left = deleteNode(root->left, key);
  }
  else if (key > root->key)
    root->right = deleteNode(root->right, key);

  else {
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    struct node *temp = minvalue(root->right);

    root->key = temp->key;

    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}

int main() {
  struct node *root = NULL;
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
      int ele;
      scanf("%d",&ele);
      root=insert(root,ele);
  }
  int del;
  scanf("%d",&del);
  printf("Preorder: ");
  preorder(root);
  root=deleteNode(root,del);
  printf("\n");
  printf("Preorder after deleting %d: ",del);
  preorder(root);
  
} 
