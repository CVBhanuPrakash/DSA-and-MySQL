class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = size(nums);
        int count=0;
        int i=1,j=0;
        for(i=1; i<n-1; i++){
            if(nums[j] < nums[i] && nums[i] > nums[i+1]){
                count++;
                j = i;
            }
            else if(nums[j] > nums[i] && nums[i] < nums[i+1]){
                count++;
                j = i;
            }
        }
        return count;
    }
};