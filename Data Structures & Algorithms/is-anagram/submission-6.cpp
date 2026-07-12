class Solution {
public:
    bool isAnagram(string s, string t) {
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
};
