# 2-D Arrays README

This folder contains algorithms and foundational operations performed on 2D arrays (matrices). The concepts covered include searching, summing specific patterns, and analyzing row-wise data.

1. Diagonal Sum
    - Concept: Calculating the sum of elements located on the primary (main) and secondary (anti) diagonals of a square matrix.
    - Brute Force Approach ($O(n^2)$): Involves traversing every single element of the matrix using nested loops. During traversal, it checks if an element's indices meet the mathematical conditions for being on a diagonal (e.g., `row == column` for the primary diagonal, or `row + column == dimension - 1` for the secondary diagonal) and adds it to the total sum.
    - Optimal Approach ($O(n)$): A highly efficient method that uses a single loop to iterate through the rows. Instead of checking every element, it directly accesses the required primary and secondary diagonal elements for that specific row using index math. It also includes a conditional check to ensure the center element is not added twice in matrices with odd dimensions.

2. Linear Search in a 2D Array
    - Concept: A straightforward searching algorithm to find the exact row and column index of a target value within a two-dimensional grid.
    - Approach: Utilizes nested loops to systematically scan the matrix row by row, and column by column within each row. Every element is compared against the target value. If a match is found, the execution halts and returns the coordinates; if the loops complete without a match, it confirms the element is not present.

3. Maximum Row Sum
    - Concept: Analyzing the data row-by-row to determine which single row yields the highest mathematical sum of its elements.
    - Approach: Involves setting a variable to track the maximum sum (initially set to the lowest possible integer). Using nested loops, the algorithm iterates through the matrix. For each individual row, it calculates the total sum of its elements. After a row is fully processed, its sum is compared against the global maximum sum, updating it if necessary. The row sum is then reset to zero before moving on to calculate the next row.