class Solution {
public:
    string reverseWords(string s) {
        int start=0,j;
        char temp;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                for(j=0;j<(i-start)/2;j++){
                    temp = s[j+start];
                    s[j+start]=s[i-1-j];
                    s[i-1-j]=temp;
                }
                start = i+1;
            }
            
            if(i==s.length()-1){
                i++;
                for(j=0;j<(i-start)/2;j++){
                    temp = s[j+start];
                    s[j+start]=s[i-1-j];
                    s[i-1-j]=temp;
                }
            }
        }
        return s;
    }
};