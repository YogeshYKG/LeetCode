class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;  // HashSet to track seen elements
        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                // If the number is already in the set, return true (duplicate found)
                return true;
            }
            seen.insert(num);  // Insert the number into the set
        }
        // No duplicates found, return false
        return false;
    }
};