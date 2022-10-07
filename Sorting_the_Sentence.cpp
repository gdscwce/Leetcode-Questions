class Solution {
public:
    string sortSentence(string s) {
        vector<pair<char,string>>v;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' and s[i]<='9'){
                v.push_back({s[i],temp});
                temp="";
                continue;
            }
            if(s[i]!=' ') temp+=s[i];
        }
        sort(v.begin(),v.end());
        string ans="";
        for(int i=0;i<v.size()-1;i++){
            ans+=v[i].second+" ";
        }
        ans+=v[v.size()-1].second;
        return ans;
    }
};
