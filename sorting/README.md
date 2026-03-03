# Sorting README
This folder contains implementations of fundamental sorting algorithms and specific sorting problem patterns. These algorithms are used to rearrange elements in an array into a specific order (typically ascending).

1. Bubble Sort
    - Concept: A simple comparison-based sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process pushes the largest unsorted element to its correct position at the end of the array during each pass.
    - Optimization: The standard algorithm can be optimized by tracking whether any swaps occurred during an inner loop iteration. If an entire pass completes without a single swap, it guarantees that the array is already fully sorted, allowing the algorithm to break out of the outer loop early and save execution time.

2. Selection Sort
    - Concept: This algorithm divides the input list into two parts: a sorted sublist built up from left to right, and a sublist of the remaining unsorted items.
    - Approach: It proceeds by finding the minimum element from the unsorted portion of the array. Once the minimum element is found, it is swapped with the first element of the unsorted portion, effectively growing the sorted portion by one element.

3. Insertion Sort
    - Concept: A sorting algorithm that builds the final sorted array one item at a time, much like sorting a hand of playing cards.
    - Approach: It iterates through the array, taking the current element and comparing it to the previously sorted elements. Elements that are larger than the current element are shifted one position to the right to make space, and the current element is then inserted into its correct sorted position.

4. Sort 0s, 1s, and 2s
    - Concept: A specialized sorting problem where the array contains only three distinct values (0, 1, and 2), requiring them to be grouped together in ascending order.
    - Optimized Counting Approach: A straightforward two-pass approach where the first pass counts the total occurrences of 0s, 1s, and 2s. The second pass then overwrites the array with the appropriate number of 0s, followed by 1s, and then 2s based on those counts.
    - Optimal Approach (Dutch National Flag Algorithm): A single-pass, highly efficient solution utilizing three pointers: low, mid, and high. The array is traversed using the mid pointer. If a 0 is encountered, it is swapped with the low pointer element; if a 2 is encountered, it is swapped with the high pointer element. This elegantly segregates the elements into their proper regions dynamically without needing to count them first.