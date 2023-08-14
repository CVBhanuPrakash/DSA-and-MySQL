class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        int n=s.size();
        string ans="";
        stack<char>st;
        while(i<n){
            if(st.empty() || st.top()!=s[i]) st.push(s[i]);
            else st.pop();
            i++;
        }
        while(!st.empty())
        {
            char ele=st.top();
            st.pop();
            ans+=ele;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};