Kadane's Algorithm?
Kadane's Algorithm is designed to find the maximum sum of a subarray inO(n) time. 
Here, the problem is rephrased to find the maximum difference between two elements in the array (buying and selling prices), where the selling day comes after the buying day. The principle of tracking:

A running minimum value (minPrice).
The maximum profit (maxProfit).
is analogous to Kadane's approach of maintaining:

A running maximum subarray sum.
The global maximum subarray sum.
Thus, this is a greedy algorithm that works efficiently by making local optimal choices at each step to reach a global optimum. It ensures that:

We always buy at the lowest point before selling.
We calculate profits dynamically in one pass without revisiting earlier elements.
Naming in Context:
Often simply called a single-pass greedy solution for the stock-buying problem.
Sometimes referred to as modified Kadane's Algorithm in this specific context.​
