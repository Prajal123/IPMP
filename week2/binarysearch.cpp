#include  <iostream>
using namespace std;
int BinarySearch(int A[], int l, int r, int key)
{
	int m;

	while( l <= r )
	{
		m = l + (r-l)/2;

		if( A[m] == key ) 
			return m;

		if( A[m] < key ) 
			l = m + 1;
		else
			r = m - 1;
	}

	return -1;
}

int main(){
  
  int arr[]={1,2,3,4,5,6};

  cout<<binarySearch(arr,0,5,3)<<endl;
  
  return 0;
}
