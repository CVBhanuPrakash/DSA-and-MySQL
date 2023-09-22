class Solution {
public:
    bool rotateString(string A, string B, int rotation) {
        for(int i = 0; i < A.length(); i++) {
            if(A[i] != B[(i+rotation)%B.length()]) return false;
        }
        return true;
    }
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;
        if(s.length() == 0) return true;
        
        for(int i = 0; i < s.length(); i++){
            if(rotateString(s, goal, i))
                return true;
        }
        return false;
    }
};