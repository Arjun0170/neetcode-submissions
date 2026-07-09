class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int k = t.size();
        if (n != k) {

    return false;

} 
        map<char,int>mpps;
        map<char,int>mppt;
        for(int i=0;i<n;i++){
            mpps[s[i]]++;
        }
        for(int i=0;i<k;i++){
            mppt[t[i]]++;
        }
        auto it1= mpps.begin();
        auto it2=mppt.begin();
        bool tf;
        

        while(it1!=mpps.end()&& it2!=mppt.end()){
    if ((it1->first != it2->first) || (it1->second != it2->second)) {
        return false;
    }
            it1++;
            it2++;
     
        }

        return true;
        
        
        


        
    }
}; 