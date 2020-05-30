/*program to create a linked list*/
#include<stdio.h>
struct node
{
    int i;
    struct node *link;
}*head;

void create_node(int n)
{
    int data;
    struct node *temp;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("memory not allocated!");
    }
    else
    {
    printf("enter the data: ");
    scanf("%d",&data);
    temp=head;
    head->i=data;
    head->link=NULL;

    /*for creating more node*/
    for(int j=2;j<=n;j++)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data: ");
        scanf("%d",&data);
        newnode->i=data;
        newnode->link=NULL;
        temp->link=newnode;
        temp=temp->link;
    }
    printf("list formed successfully");
}}
int length(struct node*head)
{
    struct node*temp;
    temp=head;
    int j=1;
    while(temp->link!=NULL)
    {
        temp=temp->link;
        j++;
    }
    return(j);
}
void delet_any_position(struct node*head)
{
        int loc,k=1;
        printf("\nenter the position: ");
    scanf("%d",&loc);
    struct node*temp=head;
    struct node*p;
    while(k<loc-1)
{
    temp=temp->link;
    k++;
}
   p=temp->link;
   temp->link=temp->link->link;
   p->link=NULL;
   free(p);

    }

void traverse_node(struct node*head)
{
   struct node*travcheck;
   travcheck=head;
  do
   {
       printf("%d\n",travcheck->i);
       travcheck=travcheck->link;
   }
   while(travcheck!=NULL);
}
void main()
{
    int n;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    create_node(n);
    int k=length(head);
    printf("\nto delet a node at any position:");
    delet_any_position(head);
     traverse_node(head);
 }
