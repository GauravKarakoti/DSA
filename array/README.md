# Arrays README
This folder contains foundational algorithms and operations performed on 1D arrays. The concepts covered include searching, modifying, and extracting specific mathematical properties from arrays.

1. Linear Search
    - Concept: A straightforward searching algorithm that checks every element in the array sequentially until the desired target value is found or the end of the array is reached.
    - Application: Useful for finding the exact index of an element in an unsorted dataset.

2. Maximum Subarray Sum
    - Concept: The goal is to find a contiguous portion of the array (a subarray) that yields the highest possible sum.
    - Brute Force Approach: Involves generating all possible subarrays using nested loops, calculating the sum for each, and keeping track of the maximum sum encountered.
    - Kadane's Algorithm (Optimal): An efficient, single-pass algorithm that maintains a running sum. It continuously adds elements to the current sum, updating the overall maximum sum whenever the current sum exceeds it. If the running sum ever drops below zero, it is reset to zero, effectively discarding portions of the array that would negatively impact the total sum.

3. Pair Sum
    - Concept: Finding two distinct elements within an array that add up to a specific, predefined target value.
    - Brute Force Approach: Uses nested loops to check every single combination of two elements to see if their sum matches the target.
    - Two-Pointer Approach (Optimal): Utilizes two indices (pointers) starting at opposite ends of a sorted array. If the sum of the elements at the pointers is greater than the target, the right pointer is decremented to decrease the sum. If the sum is less than the target, the left pointer is incremented to increase the sum. This continues until the exact target sum is found or the pointers meet.

4. Array Reversal
    - Concept: Reordering the elements of an array so that the first element becomes the last, the second becomes the second-to-last, and so on.
    - Approach: Iterates strictly through the first half of the array. During each iteration, the element at the current index i is swapped with its corresponding counterpart at the opposite end of the array (at index size - i - 1).

5. Find Smallest and Largest Element
    - Concept: Scanning a dataset to determine the extreme minimum and maximum values present.
    - Approach: Initializes two tracking variables (one for the smallest value and one for the largest) using the first element of the array. The algorithm then linearly traverses the remaining elements, overwriting the smallest variable if a lesser value is encountered, or overwriting the largest variable if a greater value is found.