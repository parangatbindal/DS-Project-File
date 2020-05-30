/* program to implement the BST insertion*/
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
 int leaf_node(struct node*root)
 {
     if(root==NULL)
        return 0;
     else if(root->left==NULL && root->right==NULL)
        return 1;
     else
        return(leaf_node(root->left)+leaf_node(root->right));

 }
void main()
{
    int ch,n;
    printf("press 1 for insert\n");
    printf("press 2 for exit\n");
    printf("press 3 to find no.of leaf node\n");
    while(1)
    {
      printf("enter your choice: ");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1: insertion();
                  break;
          case 2: exit(0);
          case 3: n=leaf_node(root);
                   printf("no. of leaf nodes are: %d\n",n);
                   break;
          default: printf("invalid input\n");
      }
    }
}

