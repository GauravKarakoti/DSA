# Conversions README
This folder contains algorithms for converting numerical values between different base systems.

- **Binary to Decimal Conversion:**
    - This algorithm transforms a base-2 (binary) integer into a base-10 (decimal) integer.
    - The process iteratively extracts the individual digits of the binary number from right to left (least significant to most significant) by finding the remainder of the number when divided by 10.
    - If the extracted digit is a '1', the system calculates the corresponding power of 2 for that position and adds it to a running decimal total.
    - For each iteration, the power of 2 multiplier is doubled, and the original binary number is truncated by a factor of 10 to process the next digit.

- **Decimal to Binary Conversion:**
    - This algorithm handles the reverse process, transforming a base-10 integer into a base-2 representation.
    - It relies on repeated division by 2. During each step, the remainder (which will always be 0 or 1) is captured.
    - These remainders are dynamically assembled into a single integer output by multiplying each sequential remainder by ascending powers of 10.
    - The loop continues shifting and calculating until the base decimal number has been reduced to zero.