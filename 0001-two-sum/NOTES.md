Notes: Two Sum Problem - Approaches Implemented

Overview

In solving the Two Sum problem, three approaches were implemented and pushed to GitHub. Below are the details of each approach:

1. HashMap for Unsorted Array

Description

Purpose: Handles unsorted arrays efficiently by mapping values to their indices.

Technique: Uses a HashMap to store each number and its corresponding index while traversing the array.

Logic:

unordered_map<int, int> hashMap;
for (int i = 0; i < nums.size(); i++) {
    int complement = target - nums[i];
    if (hashMap.find(complement) != hashMap.end()) {
        return {hashMap[complement], i};
    }
    hashMap[nums[i]] = i;
}
return {};

Complexity

Time Complexity: O(n), as each element is processed once.

Space Complexity: O(n), due to the HashMap.

2. Two Pointer Approach

Description

Purpose: Optimized for sorted arrays.

Technique: Uses two pointers to traverse the array from both ends.

Logic:

sort(nums.begin(), nums.end());
int left = 0, right = nums.size() - 1;
while (left < right) {
    int sum = nums[left] + nums[right];
    if (sum == target) {
        return {left, right};
    } else if (sum < target) {
        left++;
    } else {
        right--;
    }
}
return {};

Complexity

Time Complexity: O(n log n) for sorting + O(n) for the two-pointer traversal.

Space Complexity: O(n) to store the original indices.

3. Greedy Approach

Description

Purpose: Focuses on direct pairing of elements in certain constrained scenarios.

Technique: Attempts to make optimal local choices to find the target.

Logic:

vector<int> numsSorted = nums; 
sort(numsSorted.begin(), numsSorted.end());
for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
        if (numsSorted[i] + numsSorted[j] == target) {
            return {i, j};
        }
    }
}
return {};

Complexity

Time Complexity: O(n^2) in worst case for nested loops.

Space Complexity: O(1) additional space.

Summary

Each approach is suitable for specific scenarios:

HashMap: Best for unsorted arrays.

Two Pointer: Optimal for sorted arrays.

Greedy: Useful for certain constrained input types where greedy pairing works well.

