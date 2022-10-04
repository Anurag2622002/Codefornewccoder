// Optimized implementation of Bubble sort to avoid extra spaces.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[], int n)
{
    int i, j, flag, temp;

   for (i = 0; i < n-1; i++)
  {
	flag=0;
	for (j = 0; j < n-1-i; j++)
	{
		if (arr[j] > arr[j+1])
		{
		   temp=arr[j];
		   arr[j]=arr[j+1];
		   arr[j+1]=temp;
		   flag=1;
		}
	}

	// IF no two elements were swapped
	// by inner loop, then break
	if (flag==0)
		break;
  }
}

// Function to print an array
void printArray(int arr[], int size)
{
	    for (int i = 0; i < size; i++)
            {
		cout <<" "<< arr[i];
            }
}

// Driver program to test above functions
int main()
{
        int n;// size of the array
	cout<<"Enter the size of Array"<<endl;
	cin>>n;
	
	int arr[n];
	cout<<"Enter the elements of the Array"<<endl;
	for(int i=0; i<n; i++)
	{
	    cin>>arr[i];
	}
	
	bubbleSort(arr, n);
	cout <<"Sorted array: \n";
	printArray(arr, n);
	return 0;
}
// Time Complexity:
// Best Case: O(n)
// Worst case: O(n^2)
