# Sorting-Algorithms

## Bubble Sort
  - Bubble sort is an algorithm that repeatedly swaps the adjacent elements if they are in the wrong order. It is the simplest sorting algorithm and will need one full pass through the elements without any elements swapping to complete sorting. 
  - O(n^2)

## Bucket Sort
  - Bucket sort is an algorithm that is used when the input is uniformily distributed over a range. It creates n number of empty buckets and applies a sorting algorithm to the elements in each bucket, then takes the elements out of the buckets and joins them to a sorted array
  - Worst case - O(n^2)

## Count Sort
  - Count sort is an algorithm based on keys within a specific range that counts the numbers of objects having distinct keys, then calculates the positioin of each object in the output array
  - Worst case - O(n)
  
## Heap Sort
  - Heap sort is an algorithm that sorts in place and uses the heap data structure to manage information with max-heap. Build a max-heap from data. With the largest item now stored at the root, replace it with the last item and reduce heap size by 1. Heapify root of the tree and repeat the last 2 steps while the heap size is greater than 1.
  - Worst case - O(nlog(n))
  
## Insertion Sort
  - Insertion sort is an algorithm that iterates from data[1] to data[n] over and array and compares the current element to its predecessor. Moves the greater elements one position up to make space for the element to swap.
  - Worst case - O(n^2)
  
## Merge Sort
  - Merge sort is a recursive algorithm that uses the divide-and-conquer concept by splitting the data at its midpoint, then continue to split the data and recursively sort the subdata. Next, combine the sorted subdata back into the single sorted subdata
  - Worst case - O(nlog(n))

## Quick Sort
  - Quick sort is a divide-and-conquer algorithm. It chooses and element as pivot and partitions the array around the selected pivot point. The pivot point can be selected as always the first element, always, the last element, a random element, or the median. I have used the last element as the pivot point. This algorithm recursively partitions and sorts the array.
  - Worst case - O(n^2)

## Radix Sort
  - Radix sort is an algorithm only used to sort numbers. It sorts the numbers from least significant digit, to most significant digit and uses counting sort as a subroutine to sort
  - Worst case - O(nk)
  
