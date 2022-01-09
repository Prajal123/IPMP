#include <iostream>

using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void heapify(int *a,int n,int i){
    int largest=i;
    int l=i+1;
    int r=i+2;
    if(a[l]>a[largest] && l<n){
       largest=l;
    }
    if(a[r]>a[largest] && r<n){
        largest=r;
    }
    if(largest!=i){
        swap(&a[i],&a[largest]);
        heapify(a,n,largest);
    }
}
void heapsort(int *a,int n){
    for(int i=n/2;i>=0;i--){
        heapify(a,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(&a[0],&a[i]);
         
         heapify(a,i,0);
    }
}
int main(){

    int arr[]={1,42,3,2,5};
    heapsort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
