#include <iostream>

using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void insertion(int *a,int n){
    int j,key;
    for(int i=1;i<n;i++){
         key=a[i];
       j=i-1;
         while(j>=0 && a[j]>key){
           a[j+1]=a[j];
           j--;
         }
         a[j+1]=key;
    }
}
int main(){
    int arr[]={1,2,4,3,5};
    insertion(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
