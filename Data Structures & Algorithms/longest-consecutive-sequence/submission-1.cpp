class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // int longest = 0;
        // unordered_set<int> st(nums.begin(), nums.end());
        // for(int num : nums){
        //     if(st.find(num-1) != st.end()){
        //         int length = 0;
        //         while(st.find(num+1) != st.end()){
        //             length++;
        //             longest = max(longest, length);
        //             num++;
        //         }
        //     }
        // }
        sort(nums.begin(), nums.end());
        int longest=1;

        if(nums.size() < 1) return 0;
        for(int i=0; i<nums.size(); i++){
            int currlen=1;
            int curr = nums[i];
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j] == curr) continue;

                if(nums[j] - curr == 1){
                    currlen++;
                    curr = nums[j];
                }
                else{
                    break;
                }
                
            }
            longest = max(longest, currlen);

        }
        return longest;
    }
};
