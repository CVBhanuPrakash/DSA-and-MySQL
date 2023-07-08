class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        for(int i = 0; i < haystack.size(); i++){
            int j =0;
            int k = i; 
            while(haystack[k] == needle[j] && j<n){
                k++; j++; 
            }
            if(j == n) return i;
        }
        return -1;
    }
};