# Binary Search README

This folder contains algorithms demonstrating the principles and applications of Binary Search. It covers both standard searching techniques and advanced problem-solving patterns like "Binary Search on Answer Space."

### 1. Standard Binary Search
- **Concept:** A highly efficient searching algorithm that finds the position of a target value within a sorted array. It works by repeatedly dividing the search interval in half.
- **Implementations:** It can be implemented using both iterative (loops) and recursive approaches.
- **Key Optimization:** When calculating the middle index, simply adding the start and end indices `(start + end) / 2` can cause integer overflow if the indices are extremely large. To prevent this, the optimized formula `start + ((end - start) / 2)` is used.

### 2. Book Allocation Problem
- **Concept:** This is a classic "Min-Max" problem. Given an array representing the pages of books, the goal is to allocate continuous segments of books to a set number of students such that the maximum number of pages assigned to any single student is minimized.
- **Approach (Binary Search on Answer Space):** Instead of searching for an element, the binary search is applied to the potential *range of answers*. The search space ranges from 0 up to the sum of all pages. A helper function verifies if a chosen "mid" value is a valid maximum capacity by greedily allocating books and ensuring the required number of students is not exceeded.

### 3. Painter's Partition Problem
- **Concept:** Logically identical to the Book Allocation problem. Given an array representing the lengths of boards and a set number of painters, the goal is to find the minimum time needed to paint all boards, ensuring that the maximum time taken by any single painter is minimized.
- **Approach:** It utilizes binary search over the total possible time range (0 to the sum of all board lengths). A validity function checks if a certain maximum time limit allows all boards to be painted within the allowed number of painters. 

### 4. Aggressive Cows
- **Concept:** This is a "Max-Min" problem. Given an array of stall coordinates, the objective is to place a specified number of cows in the stalls so that the minimum distance between any two cows is as large as possible (maximized). 
- **Approach:** 1. The dataset of stall positions must first be sorted in ascending order.
  2. Binary search is applied to the potential answer space for distance. 
  3. A helper function iteratively tries to place the cows, ensuring that the distance between the last placed cow and the current stall is greater than or equal to the "mid" distance being tested.