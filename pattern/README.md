# Patterns README
This folder contains foundational exercises in loop manipulation, demonstrating how to use nested iterations to map visual geometric patterns to terminal outputs.

- Butterfly Pattern:
    - This visual structure is constructed using two major logical blocks: one for the top half and one for the bottom half.
    - It utilizes coordinate-based mathematical conditions to print asterisks on the outer edges of the grid while printing empty spaces in the middle, resembling butterfly wings.

- Hollow Diamond Pattern:
    - Similar to the butterfly shape, this algorithm splits the execution into an upper pyramid and an inverted lower pyramid.
    - It strictly prints asterisks only on the calculated outer boundary diagonals (based on specific algebraic matching of row and column variables) leaving the interior completely hollow.

- Square Grid (Pattern 1):
    - Generates an N x N matrix where every row consists of numbers resetting and counting up from 1 to the matrix dimension.

- Continuous Square Grid (Pattern 2):
    - Generates an N x N matrix using a globally scoped tracking variable.
    - This counter increments with every single printed element, resulting in a continuous sequence of integers that do not reset at line breaks.

- Asterisk Right Triangle (Pattern 3):
    - Produces a standard, left-aligned right-angled triangle filled with asterisk characters.

- Row-Repeated Triangle (Pattern 4):
    - Creates a left-aligned right triangle where every character printed in a specific row is simply the index number of that row (e.g., the second row is filled with 2s, the third with 3s).

- Column-Incremented Triangle (Pattern 5):
    - Produces a left-aligned right triangle where the elements in each row begin at 1 and count upward, stopping when they reach the current row's depth.

- Reverse Counting Triangle (Pattern 6):
    - Constructs a left-aligned right triangle where the sequence in each row starts at the current row's maximum index and counts backward down to 1.

- Floyd's Triangle Variant (Pattern 7):
    - Generates a left-aligned right triangle filled using a continuous, uninterrupted integer sequence.
    - The tracking variable preserves its state across row breaks.

- Right-Aligned Row Pattern (Pattern 8):
    - Creates a right-aligned upper triangular visual.
    - It uses conditional logic to pad the left side of the row with empty spaces, and then prints the row index number on the right side once the column matches or exceeds the row depth.

- Number Pyramid:
    - Constructs a fully centered pyramidal structure.
    - It calculates and outputs preceding spaces to push the structure into the center.
    - The printed sequence in each row counts upward to the current row number, and then symmetrically reverses direction to count back down to 1.