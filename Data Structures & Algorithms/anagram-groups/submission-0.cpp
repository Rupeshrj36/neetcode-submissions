class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> mp;  

        for(string word : strs){
            string temp = word;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(word);
        }

        vector<vector<string>> ans;
        for(auto m : mp){
            ans.push_back(m.second);
        }

        return ans;
    }
};
