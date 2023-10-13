class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pp(n, 1);
        for(int i=1; i<n; i++) pp[i] = pp[i-1] * nums[i-1];

        int post = 1;
        for(int i=n-2; i>=0; i--){
            post *= nums[i+1]; 
            pp[i] = pp[i] * post;
            
        }
        return pp;
        // int n =nums.size();
        // vector<int> pre(n, 1);
        // for(int i=1; i<n; i++){
        //     pre[i] = pre[i-1] * nums[i-1];
        // }
        // vector<int> post(n, 1);
        // for(int i=n-2; i>=0; i--){
        //     post[i] = post[i+1] * nums[i+1];
        // }
        // for(int i=0; i<n; i++){
        //     nums[i] = pre[i]*post[i];
        // }
        // return nums;
    }
};