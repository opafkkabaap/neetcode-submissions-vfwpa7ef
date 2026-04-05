class Solution {
public:
    bool isPalindrome(string s) {
        string k;
        bool ans = true;
        for(int i=0;i<s.length();i++){
            if(s[i]>='0' && s[i]<='9' || s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z'){
                k+=tolower(s[i]);
            }
        }
        int i=0;
        for(int i=0;i<k.length()/2;i++){
            if(k[i]!=k[k.length()-1-i]){
                ans = false;
                break;
            }

        }
        return ans;
    }
};
