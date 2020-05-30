/*program to implement BST tree*/
#include<stdio.h>
struct node
{
    int i;
    struct node*left;
    struct node* right;
};
struct node*root=NULL;
struct node* create_node()
{
    int data;
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the node data:\n");
    scanf("%d",&newnode->i);
    if(newnode->i== -1)
        return NULL;
    else
    {
        newnode->left=NULL;
        newnode->right=NULL;
        return newnode;
    }
}
  struct node* create_tree()
 {
     struct node*temp=create_node();
     if(temp==NULL)
        return NULL;
     else
     {
         printf("to create a left child of %d :",temp->i);
         temp->left=create_tree();
         printf("to create a right child of %d :",temp->i);
         temp->right=create_tree();
          return temp;
     }
 }
void main()
{
    printf("to create a tree:\n");
     printf("enter -1 to terminate the node\n");
    root=create_tree();
}
