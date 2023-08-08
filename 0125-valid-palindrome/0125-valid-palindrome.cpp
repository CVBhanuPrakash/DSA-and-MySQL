class Solution {
public:
    bool isPalindrome(string s) {
        //initializing 2 pointers to compare elements front and back
       int start=0;
       int end=s.size()-1;
       //comparing till half of the elements
       while(start <= end){
           //if it is not alpha numerical, ignore it. Same at back also
           if(!isalnum(s[start])){
               start++; continue;
            }
           if(!isalnum(s[end])){
               end--;continue;
            }
            //converting all elements to lowercase for exact comparision
           if(tolower(s[start]) != tolower(s[end])) return false;
           else{
               start++;
               end--;
           }
       }
       return true;
}
};