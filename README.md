# Sorting Algorithms

## Selection sort

1. Array is imaginary divided into 2 parts (sorted & unsorted).
2. Sorted part is empty and unsorted one has the whole array.
3. In every step, find the minimum or maximum element in the unsorted part and add it to the end of sorted one.
4. When unsorted part becomes empty, the algorithm stops.

![selection sort visual](images/selectionSort.png)

## Insertion sort

1. Array is imaginary divided into 2 parts (sorted & unsorted) just as selection sort.
2. sorted part contains the first element in the array, & unsorted has the rest of the array.
3. In every step, the algorithm takes the first element in the unsorted part then Inserts it in its right place in sorted part (by shifting elements to assure it's put in its right place).
4. Algorithm ends when unsorted part is empty.

![insertion sort visual](images/insertionSort.png)

## Bubble sort
1. Start at the beginning: Imagine you have an unsorted list of elements. Bubble sort starts by comparing the first two elements.
2. Compare and swap: If the first element is larger than the second element, they are swapped. This brings the larger element one step closer to the end of the list.
3. Move on: After comparing the first two elements, bubble sort moves on to compare the second and third elements. This continues until the end of the list is reached.
4. Repeat: Since some elements might still be out of order, the entire process (comparing and swapping adjacent elements) is repeated.
5. Bubbles Up: With each pass through the list, the largest element "bubbles up" to its correct position at the end of the list.
6. End when sorted: The algorithm continues looping through the list, making passes until no swaps are needed in a complete pass, indicating the list is sorted.


![complexity](images/bubbleSort.png)

## Shell sort (Improved insertion sort)

1. Gaps and sub-lists: Shell sort introduces the concept of a gap. It starts with a large gap value and repeatedly sorts sub-lists of elements separated by that gap. The idea is to take advantage of the larger distance between elements to move them closer to their sorted positions more efficiently.

2. Sorting sub-lists:  Shell sort iterates through the list, considering elements separated by the current gap. For each gap value, it performs an insertion sort on these sub-lists. This allows elements to "jump" larger distances in the list, reducing disorder more quickly.

3. Shrinking the gap:  After a pass with the current gap, the gap value is reduced (typically divided by a factor like 2 or 3). This process continues until the gap becomes 1, essentially performing a normal insertion sort on the entire list.

4. Effectively moving elements: By using larger gaps initially, shell sort can move elements that are far apart in the list more efficiently compared to just shifting them by one position like in insertion sort. This reduces the number of swaps needed in the later stages with smaller gaps.

