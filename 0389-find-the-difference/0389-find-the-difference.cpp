class Solution {
public:
    char findTheDifference(string s, string t) {
        char x = 0;
        for(auto ch: s) x ^= ch;
        for(auto it: t) x ^= it;
        return x;
    }
};