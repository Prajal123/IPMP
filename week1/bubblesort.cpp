#include <iostream>

using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubblesort(int *a,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
int main(){
    int arr[]={1,3,5,2,4};
    bubblesort(arr,5);

for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}
