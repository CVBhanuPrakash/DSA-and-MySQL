class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> v(26);
        for(auto ch: magazine){
            int index = ch-'a';
            v[index]++;
        }
        for(auto ch: ransomNote){
            int index = ch - 'a';
            if(--v[index] < 0) return false;
        }
        return true;
    }
};