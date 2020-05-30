#include<stdio.h>
#include<stdlib.h>
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
    void insert_after(struct node*head)
    {
        struct node*temp;
        int data,pos ,i=1;
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nenter the position where you want to add it from begining: ");
        scanf("%d",&pos);
        printf("enter the data: ");
        scanf("%d",&data);
        newnode->i=data;
        newnode->link=NULL;
        temp=head;
        while(i!=pos)
        {
            temp=temp->link;
            i++;
        }
        newnode->link=temp->link;
        temp->link=newnode;
        printf("successfully added:\n");
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
        printf("\nto add the node in between the list:");
        insert_after(head);
        traverse_node(head);
    }
