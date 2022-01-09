#include <iostream>

using namespace std;

void merge(int *a,int l,int mid,int r){
    int subarrayOne=mid+1-l;
    int subarrayTwo=r-mid;
    int *leftarray=new int[subarrayOne];
    int *rightarray=new int[subarrayTwo];

    for(int i=0;i<subarrayOne;i++){
         leftarray[i]=a[l+i];
    }
    for(int i=0;i<subarrayTwo;i++){
        rightarray[i]=a[i+mid+1];
    }
    int indexofleftArray=0,indexofrightArray=0;
    int indexofMergeArray=l;
    while(indexofleftArray<subarrayOne && indexofrightArray<subarrayTwo){
        if(leftarray[indexofleftArray] < rightarray[indexofrightArray]){
                    a[indexofMergeArray]=leftarray[indexofleftArray];
                    indexofleftArray++;
                    indexofMergeArray++;
        }else{
            a[indexofMergeArray]=rightarray[indexofrightArray];
                    indexofrightArray++;
                    indexofMergeArray++;
        }
    }
    while(indexofleftArray < subarrayOne){
        a[indexofMergeArray]=leftarray[indexofleftArray];
        indexofleftArray++;
        indexofMergeArray++;
    }
    while(indexofrightArray<subarrayTwo){
        a[indexofMergeArray]=rightarray[indexofrightArray];
        indexofrightArray++;
        indexofMergeArray++;
    }
}
void mergesort(int a[],int l,int r){
    if(l<r){
       int mid=l+(r-l)/2;
       mergesort(a,l,mid);
       mergesort(a,mid+1,r);
       merge(a,l,mid,r);
    }
}
int main(){
    int arr[]={1,2,4,3,5};
   mergesort(arr,0,4);
   
   for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}
