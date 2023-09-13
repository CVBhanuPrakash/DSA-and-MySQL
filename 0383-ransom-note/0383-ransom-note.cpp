class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> A;
        map<char,int> B;
        for(auto ch: ransomNote){
            A[ch]++;
        }
        for(auto ch: magazine){
            B[ch]++;
        }
        for(auto it: A){
            if(B.count(it.first) == 0) return false;
            else {
                if(it.second > B[it.first]) return false;
            }
        }
        return true;
        
    }
};