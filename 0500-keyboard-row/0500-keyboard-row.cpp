class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string s1="qwertyuiop",s2="asdfghjkl",s3="zxcvbnm";
        unordered_map<char,int> m1,m2,m3;
        for(char x:s1) m1[x]++;
        for(char x:s2) m2[x]++;
        for(char x:s3) m3[x]++;
        vector<string>finaldata;
        for(auto x:words)
        {
            string s=x;
            transform(s.begin(),s.end(),s.begin(),::tolower);
            int c1=1,c2=1,c3=1;
            for(int y=0;y<s.length();y++)
            {
                if(m1.find(s[y])==m1.end())
                {
                    c1=0;
                    break;
                }
            }
            for(int y=0;y<s.length();y++)
            {
                if(m2.find(s[y])==m2.end())
                {
                    c2=0;
                    break;
                }
            }
            for(int y=0;y<s.length();y++)
            {
                if(m3.find(s[y])==m3.end())
                {
                    c3=0;
                    break;
                }
            }
            if(c1==1 || c2==1||c3==1)
            {
                finaldata.push_back(x);
            }
        }
        return finaldata;
    }
};