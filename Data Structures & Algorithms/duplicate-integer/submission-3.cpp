class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(auto &x:nums){
            mpp[x]++;
        }
        for(auto &it:mpp){
            if(it.second>=2)
            return true;
            
        }
        return false;

        
    }

};