class Solution {
public:
    string reverseWords(string s) {
        string word;
        string ans;
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]!=' '){
                word.push_back(s[i]);
                    if((i>0 && s[i-1]==' ') || (i==0)){
                        for(int j=word.length()-1; j>=0; j--){
                            ans.push_back(word[j]);
                        }
                        ans.push_back(' ');
                        word.clear();
                    }
            }
        }
        ans.pop_back();
        return ans; 
    }
};