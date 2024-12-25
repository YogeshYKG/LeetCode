class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        // Initialize prefix and suffix product variables
        int prefix = 1, suffix = 1;
        
        // Result array to store the final products
        vector<int> result(n, 1);
        
        // First pass: Calculate prefix product and store it in result array
        for (int i = 0; i < n; ++i) {
            result[i] = prefix;
            prefix *= nums[i];
        }

        // Second pass: Calculate suffix product and multiply with the result array
        for (int i = n - 1; i >= 0; --i) {
            result[i] *= suffix;
            suffix *= nums[i];
        }

        return result;
    }
};
