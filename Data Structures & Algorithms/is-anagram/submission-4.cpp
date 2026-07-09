class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int k = t.size();
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
        if(n==k){

        while(it1!=mpps.end()&& it2!=mppt.end()){

            if((it1->first==it2->first) && (it1->second==it2->second) )
            {
                tf = true;
            }
            else
            tf = false;
            it1++;
            it2++;
     
        }}
        else {tf=false;}
        return tf;

        
        


        
    }
}; 