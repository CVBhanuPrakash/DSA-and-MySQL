class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int a = word1.length(), b = word2.length(), i=0;
        while(i<a || i<b){
            if(i<a) ans += word1[i];
            if(i<b) ans += word2[i];
            i++;
        }
        return ans;
    }
};