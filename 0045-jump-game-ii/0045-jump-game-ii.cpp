class Solution {
public:
    int jump(vector<int>& nums) {
        for(int i=1; i<nums.size(); i++)
            nums[i] = max(i+nums[i], nums[i-1]);

        int ans = 0, ind = 0;
        while(ind < nums.size() - 1){
            ans++;
            ind = nums[ind];
        }
        return ans;
    }
};