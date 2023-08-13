class Solution {
public:
    string predictPartyVictory(string senate) {
        stack<char> s;
        s.push(senate[0]);
        for(int i=1;i<senate.size();i++){
            char tp=s.top();
            if(s.empty()){
                s.push(senate[i]);
            }else{
                if(s.top()==senate[i]){
                    s.push(senate[i]);
                }else{
                    senate+=s.top();
                    s.pop();
                }
            }
        }
        return (s.top()=='R')?"Radiant":"Dire";
    }
};