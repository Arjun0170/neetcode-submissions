class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ch;

        for(int i = 0;i<strs[0].size();i++)
        {
          char ref = strs[0][i];
          for(int j=0;j<strs.size();j++){
            if(i>=strs[j].size()||strs[j][i]!=ref){
                return ch;
            }
          } 
          ch.push_back(ref);
        }
        return ch;

        
    }   
        
    };