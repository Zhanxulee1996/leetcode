class Solution {
public:
    int reverse(int x) {
        int rev=0,m;
        while(x!=0){
            m = x % 10;
            x = x/10;            
            if(rev>INT_MAX/10 || (rev==INT_MAX/10 && m>7))
                return 0;
            if(rev<INT_MIN/10 || (rev==INT_MIN/10 && m<-8))
                return 0;
            rev = rev*10 + m;
        }
        return rev;
    }
};