#include<stdio.h>
int display(int a[],int m)
{
    for(int i=0;i<m;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
}
/*using for loop
void insertionsort(int a[],int m)
{
    int key,j;
    for(int i=1;i<=m-1;i++)
    {
        key=a[i];
        for(j=(i-1);j>=0;j--)
        {
            if(a[j]>key)
                {
                    a[j+1]=a[j];
                }
        }
      a[j+1]=key;
    }

}*/


//using while loop
void insertionsort(int *A, int n){
    int key, j;
    // Loop for passes
    for (int i = 1; i <= n-1; i++)
    {
        key = A[i];
        j = i-1;
        // Loop for each pass
        while(j>=0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
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
    insertionsort(arr,n);
    display(arr,n);
    return 0;


}

