
// Program to find the sum of all elements of the array between k1 smallest and k2 smallest element of the Array.

#include <bits/stdc++.h>
using namespace std;

// This function will return the K_th smallest element in the array 
int kth_Smallest(int arr[], int k, int size)
{
    priority_queue<int> maxh; // max heap initialisation
    for(int i=0; i<size; i++)
    {
        maxh.push(arr[i]); // pushing the array elements into the max heap
        
        if(maxh.size()>k) // if the size of the max heap exceeds k , it will remove the top element of the max heap
        {
            maxh.pop();
        }
    }
    return maxh.top(); // top element of the max heap will be the k_th smallest element of the array
}


// Driver Code
int main()
{
    int k1,k2;
    cin>>k1>>k2;
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    int first = kth_Smallest(arr,k1,n); // k1 smallest element in the array
    int second = kth_Smallest(arr,k2,n);// k2 smallest element in the array
    int sum=0;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]>first and arr[i]<second)
        {
            sum=sum+arr[i]; // sum will store the sum of all elements of the array between k1 and k2 smallest elemenets of the array
        }
    }
    cout<<"The sum is "<<sum<<endl;
}

// Time Complexity: O(n logk) + O(n)   [O(nlogk) to find the kth Smallest element and O(n) to find the sum of in between elements in the array]
