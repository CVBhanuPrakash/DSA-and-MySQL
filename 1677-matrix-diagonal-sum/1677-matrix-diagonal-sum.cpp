class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int p=0, q=mat.size()-1, sum=0;
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat.size(); j++){
                if(i == j || (i==p && j==q)){
                    sum += mat[i][j];
                }
            }
            p++;
            q--;
        }
        return sum;
    }
};