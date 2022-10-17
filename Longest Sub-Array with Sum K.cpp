#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int sum=0;
        unordered_map<int, int>mp;
        int ans = 0;
        for(int i=0; i<N; i++){
            sum += A[i];
            int diff = sum-K;
            if(diff == 0)
                ans = max(ans, i+1);
            if(mp[diff])
                ans = max(ans, i-mp[diff]+1);
            if(!mp[sum])
                mp[sum] = i+1;
        }
        return ans;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
