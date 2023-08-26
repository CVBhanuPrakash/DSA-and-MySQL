class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector <int> res(arr.size());
        int great=arr[arr.size()-1];
        res[res.size()-1]=-1;
        for(int i=res.size()-2;i>=0;i--){
            res[i]=great;
            great=max(great,arr[i]);
        }
        return res;
    }
    // vector<int> replaceElements(vector<int>& arr) {
    //     int n=arr.size();
    //     for(int i=0; i<n-1; i++){
    //         int lar=0;
    //         for(int j=i+1; j<n; j++){
    //             lar = max(lar, arr[j]);
    //         }
    //         arr[i]=lar;

    //     }
    //     arr[n-1] = -1;
    //     return arr;
    // }
};