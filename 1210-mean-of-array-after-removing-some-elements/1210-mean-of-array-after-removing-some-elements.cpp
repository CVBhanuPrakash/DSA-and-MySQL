class Solution {
public:
    double trimMean(vector<int>& arr) {
        int count = 0, n = arr.size();
        double sum = 0;
        sort(arr.begin(), arr.end());
        for(int i=0.05*n; i<0.95*n; i++){
            sum += arr[i];
            count++;
        }
        return sum/count;
    }
};