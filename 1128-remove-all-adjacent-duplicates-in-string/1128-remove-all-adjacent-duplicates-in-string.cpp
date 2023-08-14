class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(auto ch :s){
            if(st.empty())st.push(ch);
            else if(ch == st.top()) st.pop();
            else st.push(ch);
        }
        string ans="";
        while(!st.empty()){
            char ele=st.top();
            st.pop();
            ans=ele+ans;
        }
        return ans;
    }
};