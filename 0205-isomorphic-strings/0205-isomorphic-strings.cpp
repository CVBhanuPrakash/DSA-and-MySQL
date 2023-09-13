class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp, mp1;
        
        if (s.size()!=t.size()) return 0;
        
        for (int i=0; i<s.size(); i++){
            if (mp.find(s[i])!=mp.end()){
                if (mp[s[i]]!= t[i])return 0;
            }
            else if (mp1.find(t[i])!=mp1.end()){
                if (mp1[t[i]]!=s[i])return 0;
            }
            else {mp[s[i]]= t[i];mp1[t[i]]=s[i];}
        }
        return 1;
    }
};