#include<stdio.h>
#include<stdlib.h>
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
 int  count_node(struct node*root)
{
    if(root==NULL)
        return 0;
     if(root->left==NULL && root->right==NULL)
        return 0;

    if(root->left!=NULL || root->right!=NULL)
        return (1+ count_node(root->left)+ count_node(root->right));
    else
        return 0;
}
void main()
{
    int ch,n;
    printf("press 1 for insert\n");
    printf("press 3 for exit\n");
    printf("press 2 to count number of non leaf nodes\n");
    while(1)
    {
      printf("enter your choice: ");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1: insertion();
                  break;
          case 2: n=  count_node(root);
                 printf("number of non leaf nodes in a given tree are: %d\n",n);
                   break;
           case 3: exit(0);
          default: printf("invalid input\n");
      }
    }
}

