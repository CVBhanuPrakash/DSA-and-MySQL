class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int exist = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0) product *= nums[i];
            else exist++;
        }
        if(exist>1){
            return vector<int>(nums.size(), 0);
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                nums[i] = product;
            }
            else if(exist){
                nums[i] = 0;
            }
            else nums[i] = product/nums[i];
        }
        return nums;
    }
};