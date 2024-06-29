class Solution {
public:
    int maxDepth(string s) {
        int ans=0,p=0;
        for_each(s.begin(),s.end(),[&](char c){
            p+=(c=='(')-(c==')');
            ans=max(ans,p);
        });
        return ans;
    }
         
};

  