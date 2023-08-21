class Solution {
public:
    int countDigits(int n) {
        int t = n;
        stack<int> s;
        while(n>0){
            s.push(n%10);
            n = n/10;
        }
        int count = 0;
        for(int i = s.size() - 1; i >=0; i--){
            if((t%(s.top())) == 0){
                count++;
                s.pop();
            }
            else s.pop();
        }
    return count;
    }
};