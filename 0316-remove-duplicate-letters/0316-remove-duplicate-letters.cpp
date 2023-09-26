class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char>st;
        set<char>charset;
        int count[26] = {0};
        for(auto c:s)count[c-'a']++;
        for(auto c:s){
            count[c-'a']--;
            if(charset.find(c) != charset.end()){
                continue;
            }
            while(!st.empty() && c<st.top() && count[st.top()-'a']>0){
                charset.erase(st.top());
                st.pop();
            }
            charset.insert(c);
            st.push(c);
        }
        string ans = "";
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        return ans;             
    }
};