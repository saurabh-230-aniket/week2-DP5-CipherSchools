class Solution {
public:
    long long rec(int i,vector<int>&arr,int s,vector<vector<long long>>& dp){
        // cout<<"at i="<<i<<endl;
        if(s==0)
        return 0;
        else if(i>=arr.size() or s<0)
        return INT_MAX;
        else if(dp[i][s]!=-1)
        return dp[i][s];
        long long a1=1+rec(i,arr,s-arr[i],dp);
        long long a2=rec(i+1,arr,s,dp);

        return dp[i][s]=min(a1,a2);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<long long>> dp(coins.size()+1,vector<long long>(amount+1,-1));
        long long ans=rec(0,coins,amount,dp);
        return ans==INT_MAX?-1:ans;
    }
};