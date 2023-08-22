class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ind = 0;
        for(auto i: nums){
            if(i == target) return ind;
            ind++;
        }
        return -1;
    }
};