class Solution {
public:
    int rec(int i,int j,string &a , string &b, vector<vector<int>>& dp){
        if(i<0 or j<0)
        return 0;
        if(dp[i][j]!=-1)
        return dp[i][j];

        int ans;
        if(a[i]==b[j]){
            ans = 1+rec(i-1,j-1,a,b,dp);
        }
        else{
            ans = max(rec(i-1,j,a,b,dp),rec(i,j-1,a,b,dp));
        }

        return dp[i][j] = ans;
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length();
        int n=text2.length();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return rec(text1.length()-1,text2.length()-1,text1,text2,dp);
    }
};