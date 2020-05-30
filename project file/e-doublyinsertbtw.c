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
void insert_between(struct node*head)
{
    int data,pos,i=1;
    struct node*temp,*q;
    temp=head;
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d",&data);
    newnode->i=data;
    newnode->left=NULL;
    newnode->right=NULL;
    printf("enter the position after which you want to add: ");
    scanf("%d",&pos);
    while(i<pos)
    {
        temp=temp->right;
        i++;
    }
    q=temp->right;
    newnode->right=q;
    newnode->left=temp;
    temp->right=newnode;
    q->left=newnode;
}
 void traverse_node(struct node*head)
 {
     struct node*temp=head;
     do
     {
         printf("%d",temp->i);
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
    printf("to add node in between the nodes:\n");
    insert_between(head);
    traverse_node(head);
}
