// Most Optimised and Efficient approach to find the median of Two sorted Arrays of different sizes

#include <bits/stdc++.h>
using namespace std;

// Binary Search Method to find median
double MedianOfSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
        if(nums2.size() < nums1.size())      return  MedianOfSortedArrays(nums2,nums1);
        // Swapping to make first array i.e. nums1 smaller
        
    	int n1 = nums1.size();
    	int n2 = nums2.size();

	    int low = 0;
    	int high= n1;

	       while (low <= high)
         {
	            	int cut1 = (low+high) >> 1; //   (low+high)/2
                int cut2 = (n1+n2+1) / 2 - cut1;
                
                int left1=cut1==0 ? INT_MIN : nums1[cut1-1];
                int left2=cut2==0 ? INT_MIN : nums2[cut2-1];
                
	            	int right1=cut1==n1 ? INT_MAX : nums1[cut1];
                int right2=cut2==n2 ? INT_MAX : nums2[cut2];
                

		   // if correct partition is done
		   if (left1<= right2 and left2<=right1)
       {
			        if((n1+n2)%2 ==0 )     return (max(left1,left2)+ min(right1,right2))/2.0;
              else                   return max(left1,left2);
		   }
		   else if (left1 > right2)
       {
			       high = cut1-1;
       }
		 	else
      {
		       	low = cut1 + 1;
       }
	}
	return 0.0;
}

// Driver code
int main()
{
        cout<<"Enter the size of first array"<<endl;
        int n1;
        cin>>n1;
	      vector<int> arr1 ;
        int a;
        cout<<"Enter the elements of First array"<<endl;
        for(int i=0; i<n1; i++)
        {
                cin>>a;
                arr1.push_back(a);
        }
        
        cout<<"Enter the size of second array"<<endl;
        int n2;
        cin>>n2;
        vector<int> arr2;
        
        cout<<"Enter the elements of Second array"<<endl;
        for(int i=0; i<n2; i++)
        {
                cin>>a;
                arr2.push_back(a);
        }
	
	     cout << "Median of the two arrays are" << endl;
	     cout << MedianOfSortedArrays(arr1, arr2);
	     return 0;
  
  // Time Complexity: O(min(log n1, log n2))    [Since binary search is being applied on the smaller of the 2 arrays]
  // Auxiliary Space: O(1)                      [ As no extra space is used ]
  
	
}
