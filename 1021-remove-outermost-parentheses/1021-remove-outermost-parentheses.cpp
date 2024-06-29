class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int balence=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(balence>0){
                    result+=s[i];
                }
                balence++;
            } else{
                balence--;
          
            if(balence>0){
                result+=s[i];
                
            }
        }
        }
        return result;
        
    }
};

  
