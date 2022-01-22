#include <iostream>
using namespace std;
int Floor(int A[], int l, int r, int key)
{
	int m;

	while( r - l > 1 )
	{
		m = l + (r - l)/2;

		if( A[m] <= key )
			l = m;
		else
			r = m;
	}

	return A[l];
}


int Floor(int A[], int size, int key)
{
	// Add error checking if key < A[0]
	if( key < A[0] )
		return -1;

	return Floor(A, 0, size, key);
}

int main(){
  int arr[]={1,2,3,4,5,6};
  cout<<Floor(arr,5,3)<<endl;
  return 0;
}
