class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==0||n==1) return 0;
        if(nums[0]==0) return -1;
       int maxReach=nums[0];
       int steps=nums[0];
       int jumps=0;
       
       for(int i=1;i<n;i++){
           
           if(i==n-1) return jumps+1;
           steps--;
           maxReach=max(maxReach,nums[i]+i);
           if(steps==0){
               if(i==maxReach) return -1;
               jumps++;
               steps=maxReach-i;
           }
       }
        return 0;
        
    }
};
