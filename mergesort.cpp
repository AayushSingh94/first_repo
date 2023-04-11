#include<iostream>
using namespace std;
void marge(int arr[],int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;

    int L[n1],R[n2];
    for(int i=0;i<n1;i++){
        L[i]=arr[l+i];
    }
    for(int j=0;j<n1;j++){
        R[j]=arr[m+j+1];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2){
        if(L[i]<=R[j]){
            arr[k++]=L[i++];
        }
        else{
            arr[k++]=R[j++];
        }
    }
    while(i<n1){
        arr[k++]=L[i++];
    }
    while(j<n2){
        arr[k++]=R[j++];
    }

}
void mergesort(int arr[],int l,int r){
    if(l<r){
        int m =l+((r-l)/2);
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        marge(arr,l,m,r);
    }
}
void display(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int main(){
int arr[]={9,6,8,2,1,4,54,544,15,41,22,66};
int r=sizeof(arr)/sizeof(arr[0]);
mergesort(arr,0,r-1);
display(arr,r);
}
