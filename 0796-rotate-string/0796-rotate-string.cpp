class Solution {
public:
    bool rotateString(string s, string goal) {
      if(s.size()!=goal.size()){
          return false;
      }
        string con=goal+goal;
        return con.find(s)!=string::npos;
        
        
    }
};