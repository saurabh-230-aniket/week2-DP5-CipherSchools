class Solution {
public:
    int rec(int i,int j,string& s,string& r,vector<vector<int>>& dp){
        if(i>=s.length() or j<0)
        return 0;
        if(dp[i][j]!=-1)
        return dp[i][j];
        int ans;
        if(s[i]==s[j])
        ans = 1+rec(i+1,j-1,s,r,dp);
        else{
            ans = max(rec(i,j-1,s,r,dp),rec(i+1,j,s,r,dp));
        }

        return dp[i][j]=ans;
    }
    int longestPalindromeSubseq(string s) {
        // if(s.length()==1)
        // return 1;
        string r=s;
        reverse(r.begin(),r.end());
        vector<vector<int>> dp(s.length(),vector<int>(s.length(),-1));
        return rec(0,s.length()-1,s,r,dp);
    }
};