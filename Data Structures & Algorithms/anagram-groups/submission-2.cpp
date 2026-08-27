class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mpp;
        vector<vector<string>>ans;
        for(int i = 0;i<strs.size();i++){
            string key = strs[i];
            sort(key.begin(),key.end());
            mpp[key].push_back(strs[i]);
        }
        for(auto &x:mpp){
            ans.push_back(x.second);
        }
        return ans;
        
    }
};
