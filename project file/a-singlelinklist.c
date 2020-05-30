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
void insertion_node(struct node*head)
{
    int data;
    struct node*s;
    struct node*trav;
    s=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the data: ");
    scanf("%d",&data);
    s->i=data;
    s->link=NULL;
    trav=head;
    while(trav->link!=NULL)
        trav=trav->link;
    trav->link=s;
    printf("successfully added");

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
void insert_at_begin(struct node*head)
{
    int data;
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("memory not allocated");
    }
    else{
    printf("enter the data: ");
    scanf("%d",&(newnode->i));
    newnode->link=head;
    head=newnode;
}
}
void main()
{
    int n;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    create_node(n);
    printf("\nto add a node at the end of the list");
    insertion_node(head);
   // printf("\nto check whether the node is added or not");
   // traverse_node(head);
    printf("to add a node at the begining\n");
    insert_at_begin(head);
    traverse_node(head);
}
