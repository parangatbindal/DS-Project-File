#include<stdio.h>
void main()
{
   int a[]={21,15,48,2,46,78,41,36,84};
   printf("you have entered\n");
   for(int i=0;i<9;i++)
    printf("%d ",a[i]);
   insertion_sort(a,9);
}
void insertion_sort(int a[],int n)
{
    int temp,j;
    for(int i=1;i<=9;i++)
    {
        temp=a[i];
        {
            for( j=i-1;j>=0&&temp<a[j];j--)
            {
                a[j+1]=a[j];
            }

        }
        a[j+1]=temp;
    }
    printf("\nafter insertion sort:\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
