class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int num = nums[i];
            int extra = target - num;
            if(mp.find(extra) != mp.end()){
                return {mp[extra],i};
            }
            mp[num] = i;
        }
        return {};
    }
};
