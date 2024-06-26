class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>>vp;
        for(auto it:mp){
            vp.push_back({it.second,it.first});
        }
        sort(vp.begin(),vp.end());
        string ans;
        for(auto it:vp){
            while(it.first!=0){
                ans.push_back(it.second);
                it.first--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};