class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int>mpp;
        for( int i = 0 ; i<nums.size();i++){
            mpp[nums[i]]=i;
        }
        for(int i =0;i<nums.size();i++){
            int key = target - nums[i];
            bool tf = mpp.find(key) != mpp.end();
            if(tf&&mpp[key]!=i){
                return {i,mpp[key]};
            } 
        }
        return {};      
    }
};
