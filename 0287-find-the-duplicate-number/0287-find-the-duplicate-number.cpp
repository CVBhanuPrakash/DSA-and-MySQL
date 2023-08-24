class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(), nums.end());
        for(int j=0; j<n-1; j++){
            if(nums[j] == nums[j+1]){
                ans = nums[j];
                break;
            }
        }
        return ans;
    }
};