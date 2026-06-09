class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> asc_prod(n, 1);
        vector<int> desc_prod(n, 1);

        for(int i=1; i<n; i++){
            asc_prod[i] *=  asc_prod[i-1] * nums[i-1];
        }

        for(int i=n-2; i>=0; i--){
            desc_prod[i] *= desc_prod[i+1] * nums[i+1];
        }

    vector<int> result(n, 1);
        for(int i=0; i<n; i++){
            result[i] = asc_prod[i] * desc_prod[i];
        }

        return result;
    }
};
