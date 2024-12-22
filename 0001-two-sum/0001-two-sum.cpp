// Greedy Approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Step 1: Store the original array with indices
        vector<pair<int, int>> indexedNums;
        for (int i = 0; i < nums.size(); i++) {
            indexedNums.push_back({nums[i], i});
        }

        // Step 2: Sort the array based on values while keeping track of original indices
        sort(indexedNums.begin(), indexedNums.end());

        // Step 3: Two-pointer approach on sorted array
        int left = 0, right = indexedNums.size() - 1;
        while (left < right) {
            int sum = indexedNums[left].first + indexedNums[right].first;

            if (sum == target) {
                // Return the original indices
                return {indexedNums[left].second, indexedNums[right].second};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }

        // Step 4: No valid pair found
        return {};
    }
};
