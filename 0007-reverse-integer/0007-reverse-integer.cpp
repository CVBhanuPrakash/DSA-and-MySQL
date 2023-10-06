class Solution {
public:
    int reverse(int x) {
        long int ans = 0;
        stack<int> s;
        while(x != 0){
            s.push(x%10);
            x = x/10;
        }
        long int one = 1;
        while(!s.empty()){
            ans = ans + s.top()*one;
            s.pop();
            one = one*10;
        }
        if(ans <= INT_MIN or ans >= INT_MAX) return 0;
        return ans;
    }
};