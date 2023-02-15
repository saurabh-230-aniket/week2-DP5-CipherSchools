class Solution {
public:
    vector<int> nstl(vector<int> arr){
        stack<int> st;
        vector<int> ans(arr.size());
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() and arr[st.top()]>=arr[i])
            st.pop();

            if(st.empty())
            ans[i]=arr.size();
            else
            ans[i]=st.top();

            st.push(i);
        }
        return ans;
    }
    vector<int> nstr(vector<int> arr){
        stack<int> st;
        vector<int> ans(arr.size());
        for(int i=0;i<arr.size();i++){
            while(!st.empty() and arr[st.top()]>=arr[i])
            st.pop();

            if(st.empty())
            ans[i]=-1;
            else
            ans[i]=st.top();

            st.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> nl,nr;
        nl = nstl(heights);
        nr = nstr(heights);

        int ans=INT_MIN;
        for(int i=0;i<heights.size();i++){
            ans=max(ans,(nl[i]-nr[i]-1)*heights[i]);
        }

        return ans;
    }
};