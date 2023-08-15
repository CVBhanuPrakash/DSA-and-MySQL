class Solution {
public:
    bool check(int n){
        int digits = 0;
        while(n>0){
            digits+=1;
            n /= 10;
        }
        if(digits%2 == 0) return true;
        else return false;
    }
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(check(nums[i])) count++;
        }
        return count;
    }
};