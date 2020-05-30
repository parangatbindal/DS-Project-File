/*code by parangat bindal*/
/* program to implement preorder traversal*/
#include<stdio.h>
struct node
{
    int i;
    struct node* left;
    struct node* right;
};
struct node*root=NULL;
void insertion()
{
    int data;
    struct node*parent;
    struct node* temp=(struct node*)malloc(sizeof(struct node));
      printf("enter the data: ");
    scanf("%d",&data);
    temp->i=data;
    temp->right=NULL;
    temp->left=NULL;
    parent=root;
    if(root==NULL)
        root=temp;
    else
    {
       struct node*curr;
       curr=root;
       while(curr)
       {
           parent=curr;
           if(temp->i>curr->i)
            curr=curr->right;
           else
            curr=curr->left;
       }
    if(temp->i>parent->i)
        parent->right=temp;
    else
        parent->left=temp;
}
}
void preorder_traverse(struct node*root)
{
    if(root)
    {
        printf("%d\n",root->i);
        preorder_traverse(root->left);
        preorder_traverse(root->right);
    }
}
void main()
{
    int ch;
    printf("press 1 for insert\n");
    printf("press 2 for exit\n");
    printf("press 3 for preorder traversing\n");
    while(1)
    {
      printf("enter your choice: ");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1: insertion();
                  break;
          case 2: exit(0);
          case 3:  printf("after preorder traverse\n");
                    preorder_traverse(root);
                     break;
          default: printf("invalid input\n");
      }
    }
}
