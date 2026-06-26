class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.length();
        for(int i=0; i<n; i++){
            char ch = s[i];
            if(ch == '(' || ch == '[' || ch == '{') st.push(ch);
            else{
                if(st.empty()) return false;
                char peek = st.top();
                if(ch == ')' && peek != '(') return false;
                if(ch == ']' && peek != '[') return false;
                if(ch == '}' && peek != '{') return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
