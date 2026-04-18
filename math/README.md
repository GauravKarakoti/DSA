# Math README
This folder contains foundational mathematical algorithms used in problem-solving.

1. Greatest Common Divisor (GCD)
- Concept: The objective is to calculate the greatest common divisor for two given integers `a` and `b`.
- Brute Force Approach: This approach utilizes a loop that iterates from 1 up to the minimum value between the two numbers. At each iteration, it checks if the current index completely divides both `a` and `b` without leaving a remainder. The highest integer that satisfies this condition is stored as the final GCD.
- Euclid's Algorithm (Optimal): This optimized method uses a recursive approach based on subtraction. It continuously subtracts the smaller number from the larger number (e.g., if `a > b`, it evaluates `a - b` against `b`). The recursion base case is reached when both numbers become equal, at which point that matching value is returned as the GCD.
- LCM Formula: The Least Common Multiple (LCM) of the two numbers can be derived directly from their GCD using the constant mathematical relationship: `LCM = (a * b) / gcd(a,b)`.