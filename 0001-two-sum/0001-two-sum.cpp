// HasMAP
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap; // Map to store numbers and their indices

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // Calculate complement
            
            // Check if the complement is in the map
            if (hashMap.find(complement) != hashMap.end()) {
                return {hashMap[complement], i}; // Found the pair
            }
            
            // Add the current number and its index to the map
            hashMap[nums[i]] = i;
        }
        
        // No valid pair found
        return {};
    }
};
