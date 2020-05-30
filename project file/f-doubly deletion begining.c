#include<stdio.h>
struct node
{
    struct node*left;
    int i;
    struct node*right;
}*head;
void create_node(int n)
{
    int data;
 struct node* temp;
 head=(struct node*)malloc(sizeof(struct node));
 printf("enter the data: ");
 scanf("%d",&data);
 temp=head;
 head->i=data;
 head->left=NULL;
 head->right=NULL;
 temp=head;
 /*for more number of nodes*/
   for(int j=2;j<=n;j++)
   {
       struct node *newnode=(struct node*)malloc(sizeof(struct node));
       printf("enter the data: ");
       scanf("%d",&data);
       newnode->i=data;
       newnode->left=NULL;
       newnode->right=NULL;
       temp->right=newnode;
       newnode->left=temp;
       temp=temp->right;
   }
   printf("list form sucessfully\n");
}
void delet_begin(struct node*head)
{
    struct node* temp=head;
    head=head->right;
    head->left=NULL;
    free(temp);
}
void traverse_node(struct node*head)
 {
     struct node*temp=head;
     do
     {
         printf("%d\n",temp->i);
         temp=temp->right;
     }
     while(temp!=NULL);
 }
void main()
{
    int n;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    create_node(n);
    printf("to delet a node from the begining\n");
    delet_begin(head);
    printf("after deletion\n");
    traverse_node(head);
}
