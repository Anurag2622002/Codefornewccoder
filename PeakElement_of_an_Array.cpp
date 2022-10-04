// C++ program to find a peak element in an array using iterative Binary Search

#include <bits/stdc++.h>
using namespace std;

// A binary search based function that returns index of a peak element in an array

int PeakElement(int arr[], int size)
{
	int start = 0;
	int end = size-1;
	while(start <= end)
	{
	    // finding mid element
	    int mid= start + (end - start)/2;
	    
	    if(mid>0 and mid <size-1)
	    {
	        if(arr[mid]>arr[mid-1] and arr[mid] >arr[mid+1])    return mid;
	        else if(arr[mid-1] > arr[mid])                      end=mid-1;
	        else                                                start=mid+1;
	    }
	    else if(mid==0)
	    {
	        if(arr[0]>arr[1])    return 0;
	        else                 return 1;
	    }
	    else if(mid == size-1)
	    {
	        if(arr[size-1]>arr[size-2])     return size-1;
	        else                            return size -2;
	    }
		
	}

	return -1;
}

// Driver Code
int main()
{
	int arr[] = { 10, 20, 15, 2, 23, 90, 67 };
	int N = sizeof(arr) / sizeof(arr[0]);
	cout << "Index of a peak point is " << PeakElement(arr, N);
	return 0;
}

/* Time Complexity: O(log n), Where n is the number of elements in the input array
[ In each step our search becomes half,hence we can compare it to Binary search.So, The time complexity is O(log n) ]

  Space Complexity: O(1)  [ Since no extra space is required ]
 */
