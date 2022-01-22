#include<iostream>
using namespace std;
int GetRightPosition(int A[], int l, int r, int key)
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

	return l;
}

int GetLeftPosition(int A[], int l, int r, int key)
{
	int m;

	while( r - l > 1 )
	{
		m = l + (r - l)/2;

		if( A[m] >= key )
			r = m;
		else
			l = m;
	}

	return r;
}

int CountOccurances(int A[], int size, int key)
{
	int left = GetLeftPosition(A, -1, size-1, key);
	int right = GetRightPosition(A, 0, size, key);
	return (A[left] == key && key == A[right])?
		(right - left + 1) : 0;
}

int main(){
  int arr[]={1,2,3,4,5,6};
  cout<<CountOccurences(arr,6,3)<<endl;
  return 0;
}
