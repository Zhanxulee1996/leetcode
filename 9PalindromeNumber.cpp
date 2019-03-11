class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0,m,tempx=x;
        if(x<0)
            return false;
        else{
            while(x!=0){
              m = x%10;
              x = x/10;
              if(rev>INT_MAX/10 ||(rev==INT_MAX/10 && m>7))
                  return false;
              if(rev<INT_MIN/10 ||(rev==INT_MIN/10 && m<-8))
                  return false; 
                rev = rev*10+m;
            }
            if(rev==tempx)
                return true;
            else
                return false;
        }        
    }
};