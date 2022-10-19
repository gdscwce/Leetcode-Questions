class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, int> mpp;
        vector<vector<string>> res;
        int idx=0;
        for(int i=0; i<strs.size();i++){
            string word=strs[i];            
            sort(word.begin(), word.end());
            if(mpp.find(word) == mpp.end()) {
                mpp[word]=idx++;
                res.push_back({strs[i]});
            }
            else {                                
                res[mpp[word]].push_back(strs[i]);
            }
         
        }
        
       
        return res;
    }
};