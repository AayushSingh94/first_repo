#include<stdio.h>
int display(int a[],int m)
{
    for(int i=0;i<m;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
}
void selectionsorting(int a[],int m)
{

    int minindex,temp;
    for(int i=0;i<m-1;i++)
    {
        minindex=i;
        for(int j=i+1;j<m;j++)
        {
            if(a[j]<a[minindex])
             {
                minindex=j;
             }
        }
        temp=a[i];
        a[i]=a[minindex];
        a[minindex]=temp;
    }
}

int main()
{
    int n;
    printf("enter the size of an array ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of an array ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    display(arr,n);
    printf("after sorting\n");
    selectionsorting(arr,n);
    display(arr,n);
    return 0;


}
