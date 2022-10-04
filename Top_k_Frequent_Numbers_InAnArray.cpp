// C++ Program to print Top k Frequent Numbers in a given Array

#include <bits/stdc++.h>
using namespace std;

void Top_K_FrequentNumbers(int arr[], int n, int k)
{
    priority_queue <pair<int,int>, vector<pair<int,int>>, greater< pair<int,int>> > minh;
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        mp[arr[i]]++;
    }
    
    for(auto i=mp.begin(); i!=mp.end(); i++)
    {
        minh.push({i->second, i->first});
        
        if(minh.size()>k)
        {
            minh.pop();
        }
    }
    
    while(minh.size()>0)
    {
        cout<<minh.top().second<<" ";
        minh.pop();
    }
}

int main()
{
    int n;
    cout<<"Enter the size of Array"<<endl;
    cin>>n;
    
    int k;
    cin>>k; 
    
    int arr[n];
    cout<<"Enter the elements of the Array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
   
    Top_K_FrequentNumbers(arr,n,k);
    
    return 0;
}

/* Time Complexity: O(K logd + d logd)
  [ To remove the top of the priority queue O(log d) time is required, so if k elements are removed then O(k log d) time is required, and 
    To construct a priority queue with d elements, O(d logd) time is required]
    
   Space Complexity: O(d), where d is the count of distinct elements in the array. 
 */  
