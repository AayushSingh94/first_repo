#include <iostream>
using namespace std;
void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partion(int arr[],int l,int r){
    //int x=(rand()%(r-l+1)+l);//add these two line for randomize quick sort
    //swap(arr,x,r);
    int pivot=arr[r];
    int i=l-1,j=l;
    while(j<r){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
        j++;
    }
    swap(arr,i+1,r);
    return (i+1);
}
void quicksort(int arr[],int l,int r){
    if(l<r){
        int p=partion(arr,l,r);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,r);
    }
}
void display(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int main(){
int arr[]={9,6,8,2,1,4};
quicksort(arr,0,5);
display(arr,6);

}
