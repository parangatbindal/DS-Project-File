#include<stdio.h>
void main()
{
    int a[]={12,15,48,43,25,57,16,18,50};
     printf("you have entered:\n");
     for(int i=0;i<9;i++)
        printf("%d ",a[i]);
    for(int k=0;k<=7;k++)
    {
        int x=MIN(a,k,9);
        int temp=a[k];
        a[k]=a[x];
        a[x]=temp;
    }
    printf("\nafter sorting:\n");
    for(int i=0;i<9;i++)
        printf("%d ",a[i]);
}
 int MIN(int a[], int k, int n)
 {
     int min,loc;
     min=a[k];
     loc=k;
     for(int j=k+1;j<n;j++)
     {
         if(min>a[j])
         {
             min=a[j];
             loc=j;
         }
     }
     return(loc);
 }

