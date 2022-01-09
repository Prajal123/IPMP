#include <iostream>

using namespace std;

void swap(int *a,int *b){
     int temp;
     temp=*a;
     *a=*b;
     *b=temp;
}
int partition(int *a,int low,int high){
    int i=low-1,key=a[high];
    int j;
    for( j=low;j<high;j++){
           if(a[j]<key){
               i++;
               swap(&a[j],&a[i]);
    }

}
swap(&a[i+1],&a[high]);
     return (i+1);
}
void quicksort(int a[],int low,int high){
    if(low<high){
        int p=partition(a,low,high);
        quicksort(a,low,p-1);
        quicksort(a,p+1,high);
    }
}
int main(){
    int arr[]={1,2,4,3,5};
    quicksort(arr,0,4);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
