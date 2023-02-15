class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        vector<int> en=arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i][0]<=en[1]){
                // overlap
                vector<int> t={en[0],max(arr[i][1],en[1])};
                // ans.push_back(t);
                en=t;
            }
            else{
                ans.push_back(en);
                en=arr[i];
            }
        }
        ans.push_back(en);
        return ans;
    }
};