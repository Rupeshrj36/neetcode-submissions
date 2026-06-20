class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string ans = "";
        for(int i=0; i<n; i++){
            if(isalnum(s[i])){
                ans+=tolower(s[i]);
            }
        }

        int m = ans.length()-1;
        int i=0;
        while(i<m){
            if(ans[i] != ans[m]) return false;
            i++; m--;
        }
        return true;
    }
};
