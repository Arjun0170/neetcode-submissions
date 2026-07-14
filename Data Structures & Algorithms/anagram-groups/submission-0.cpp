class Solution {
public:
        bool ana(string s, string t){
            if(s.size()!=t.size()){
                return false;
            }
            map<char,int>mpps;
            map<char,int>mppt;
        for(int i=0;i<s.size();i++){
            mpps[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            mppt[t[i]]++;
        }
            auto it1=mpps.begin();
            auto it2=mppt.begin();
            while(it1!=mpps.end()&&it2!=mppt.end()){
                if((it1->first!=it2->first)||(it1->second!=it2->second)){
                    return false;
                }
                it1++;
                it2++;
            }
            return true;
        }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> st;
        vector<bool>check(strs.size(),false);

            for(int i = 0;i<strs.size();i++){
                if(check[i]){
                    continue;
                }
                 vector<string> temp;
                 temp.push_back(strs[i]);
                 check[i]=true;

            for(int j=i+1;j<strs.size();j++){
                if(check[j]){
                    continue;
                }
                if(ana(strs[i],strs[j])){
                   temp.push_back(strs[j]);
                   check[j]=true;
                }
            }  st.push_back(temp);
        }

        return st;
    }
};
