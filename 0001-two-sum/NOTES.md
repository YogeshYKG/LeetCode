Notes: Two Sum Problem - Approaches Implemented

Overview

In solving the Two Sum problem, three approaches were implemented and pushed to GitHub. Below are the details of each approach:

1. HashMap for Unsorted Array

Description

Purpose: Handles unsorted arrays efficiently by mapping values to their indices.

Technique: Uses a HashMap to store each number and its corresponding index while traversing the array.

Logic:

Traverse the array.

For each element, check if the complement (target - current number) exists in the HashMap.

If found, return the indices.

Otherwise, add the current number and its index to the HashMap.

Complexity

Time Complexity: O(n), as each element is processed once.

Space Complexity: O(n), due to the HashMap.

2. Two Pointer Approach

Description

Purpose: Optimized for sorted arrays.

Technique: Uses two pointers to traverse the array from both ends.

Logic:

Sort the array while preserving original indices.

Use two pointers: one starting from the beginning (smallest number) and the other from the end (largest number).

Adjust the pointers based on the sum:

If the sum is equal to the target, return the original indices.

If the sum is less than the target, move the left pointer.

If the sum is greater than the target, move the right pointer.

Complexity

Time Complexity: O(n log n) for sorting + O(n) for the two-pointer traversal.

Space Complexity: O(n) to store the original indices.

3. Greedy Approach

Description

Purpose: Focuses on direct pairing of elements in certain constrained scenarios.

Technique: Attempts to make optimal local choices to find the target.

Logic:

Traverse the array while maintaining a record of encountered numbers.

Check each new number to see if it forms a valid pair with any previously seen number.

If so, return the result.

Complexity

Time Complexity: Depends on the implementation. Generally similar to the HashMap approach.

Space Complexity: Similar to the HashMap approach.

Summary

Each approach is suitable for specific scenarios:

HashMap: Best for unsorted arrays.

Two Pointer: Optimal for sorted arrays.

Greedy: Useful for certain constrained input types where greedy pairing works well.

