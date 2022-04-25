#include<stdio.h>
int display(int a[],int m)
{
    for(int i=0;i<m;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
}
void bubblesort(int a[],int m)
{

    int temp;
    for(int i=0;i<m-1;i++)
    {
        for(int j=0;j<m-1-i;j++)
        {
            if(a[j]>a[j+1])
               {
                   temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
               }
        }
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
    bubblesort(arr,n);
    display(arr,n);
    return 0;


}

