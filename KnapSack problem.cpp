class Solution
{
    public:
    int rec(int i,int W,int wt[],int val[],int n,vector<vector<int>>&dp){
        if(W<0)//wrong path as weight is negative
        return INT_MIN;
        if(i<0 or W==0)//corrrect path as we have put all things int the sack
        return 0;
        
        if(dp[i][W]!=-1)
        return dp[i][W];
        
        int ans;
        ans=max(rec(i-1,W,wt,val,n,dp),val[i]+rec(i-1,W-wt[i],wt,val,n,dp));
        dp[i][W]=ans;
        return ans;
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> dp(n,vector<int>(W+1,-1));
       return rec(n-1,W,wt,val,n,dp);
       
    }
};