class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(), nums.end());
        int sum = 0, temp = 0, k = nums.size()-1;
        for(int i = 0; i< nums.size(); i++){
            sum += nums[i];
        }
        while(temp <= sum - temp){
            temp += nums[k];  
            v.push_back(nums[k]); 
            k--;
        }
        return v;
    }
};