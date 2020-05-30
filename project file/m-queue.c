/*QUEUE IMPLEMENTATION USING STATIC MEMORY*/
#include<stdio.h>
# define capacity 5
int queue[5];
int front=0;
int rear=0;
void main()

{
    int ch;
    while(1)
    {
        printf("press 1 for push\n");
        printf("press 2 for pop\n");
        printf("press 3 for traverse\n");
        printf("press 4 for exit\n");
        printf("enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: traverse();
                    break;
            case 4: exit(0);
            default: printf("invalid input\n");
        }
     }
}
void push()
{
    int data;
    if(rear==capacity)
     printf("stack is full\n");
    else
    {
        printf("enter the data: ");
        scanf("%d",&data);
        queue[rear]=data;
        rear++;
    }
}
void pop()
{
    if(front==rear)
     printf("stack is empty\n");
    else
    {
        printf("popped element is=%d\n",queue[front]);
        for(int j=0;j<rear-1;j++)
        {
            queue[j]=queue[j+1];
        }
        rear--;
    }
}
void traverse()
{
    if(front==rear)
        printf("no element\n");
    else
    {
        for(int j=0;j<rear;j++)
            printf("%d\n",queue[j]);
    }
}
