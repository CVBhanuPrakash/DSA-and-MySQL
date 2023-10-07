class Solution {
public:
    long long reverse(int x) {
        long long ans = 0;
        while(x>0 || x<0){
            ans = ans*10 + x%10;
            x = x/10;
        }
        if(ans <= INT_MIN or ans >= INT_MAX) return 0;
        return ans;
    }
};