// Greedy (Kadane) Approach	
// time Compexity = \U0001d442(1)
// space Complexity = O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX; // Initialize to maximum possible value
        int maxProfit = 0; // Initialize to 0 since no profit is possible initially

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price; // Update minimum price
            } else {
                maxProfit = std::max(maxProfit, price - minPrice); // Update maximum profit
            }
        }

        return maxProfit; // Return the maximum profit
    }
};
