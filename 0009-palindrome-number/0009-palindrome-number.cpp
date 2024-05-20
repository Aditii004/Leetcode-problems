class Solution {
public:
    bool isPalindrome(int x) {
      if(x<0){
      return false;
      }
        long long ans=0;
        long long num=x;
        while(num!=0){
            int digit=num%10;
            ans=ans*10+digit;
            num=num/10;
        }
        return (ans==x);
    }
    
        
       
    
};