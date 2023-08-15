class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";
        string add = "[.]";
        for(auto ch : address){
            if(ch == '.'){
                ans += add;
            }
            else ans += ch;
        }
        return ans;
    }
};