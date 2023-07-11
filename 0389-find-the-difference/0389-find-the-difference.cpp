class Solution {
public:
    char findTheDifference(string s, string t) {
        int xors=0;
        for(auto it:s) xors=xors^it;
        for(auto i:t) xors=xors^i;
        return char(xors);
    }
};