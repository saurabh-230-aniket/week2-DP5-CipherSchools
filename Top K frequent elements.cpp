class Solution {
public:
    static bool cmp(pair<int,int>& a,pair<int,int>& b){
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto x:nums)
        mp[x]++;
        vector<pair<int,int>> v;
        for(auto x:mp)
        v.push_back({x.first,x.second});
        sort(v.begin(),v.end(),cmp);
        vector<int>ans;
        for(auto x:v){
            ans.push_back(x.first);
            k--;
            if(k==0)
            break;
        }
        return ans;
    }
};