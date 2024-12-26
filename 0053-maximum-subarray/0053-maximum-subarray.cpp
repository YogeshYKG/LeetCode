class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        // Variables to track the maximum sum and current sum
        int max_sum = nums[0], current_sum = nums[0];

        // Iterate through the array
        for (int i = 1; i < n; i++) {
            // Update current sum
            current_sum = max(nums[i], current_sum + nums[i]);

            // Update max_sum if a new maximum is found
            max_sum = max(max_sum, current_sum);
        }

        return max_sum; // Return the maximum sum
    }
};
