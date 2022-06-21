# Data Structures

## Implementation Notes

## Code Challenges

## Table of Contents
- [challenge 1](#challenge01)
- [challenge 2](#challenge02)
- [challenge 3](#challenge03)
- [challenge 4](#challenge04)
- [challenge 5](#challenge05)
- [Insertion Sort](#challenge26)
- [Merge Sort](#challenge27)

## Challenge 01 <a name="challenge01"></a>

### Reverse an Array
- Write a function called reverseArray which takes an array as an argument. Without utilizing any of the built-in methods available to your language, return an array with elements in reversed order.


### Whiteboard Process
[reverse-array Whiteboarding](Public/reverse-array.pdf)


### Approach & Efficiency
I knew that going through an array can be done recursively or iteratively.
Further, I knew that no changes to memory since we don't add or remove any element.
Thus, the simplest way to approach this problem was to
implement iteratively by using a while loop and having a temporary
variable to hold a value of either the front or the end of the array.
After I have swapped first and end elements in the array, I would need to then decrement
end and increment front pointers by one. since we only use one loop and n elements of the array
is being traversed
- Time: O(n) because we iterate through full array is worse case and Space: O(1) no extra memory is added per each
iteration
- Location: 'codechallenges/Reverse-Array/reverse-array'
- Method: reverse-array(int []);

### Challenge 02<a name="challenge02"></a>
### Whiteboard Process
[insert-Shift-Array Whiteboarding](Public/codechallenge2.pdf)



### Approach & Efficiency<a name="challenge01"></a>
After reviewing the barriers of nonrecursive problems and language limitation, I figured the best solution
is to iteratively create a new array with old array contents with target element at the middle of array. once newArray is configured,
I may use the assignment operator(dangerously) to replace old array and return old array (although it would still
just be a new array at the end of day) or just return new array (without the usage of Arraylist - as instructed).
time usage is O(n) because it depends on how long the length of array is and Space is O(1) because we dont iterate through
and add more memory

- Location: 'codechallenges/insertShift/insertShiftArray'
- Method: insertShiftArray(int []x);

### Challenge 03<a name="challenge03"></a>
### Whiteboard Process
[Binary-Search Whiteboarding](Public/binary-search.jpg)


## Approach & Efficiency
this code searches for an element in array and returns the element index that matches the key.
- worked with Jason Wilson
- Location: 'codechallenges/binary-search/binary-search.jpg'
- Method: binary-search(int []x, int target);


### Challenge 04<a name="challenge04"></a>
### Whiteboard Process
[Binary-Search Whiteboarding](Public/binary-search.jpg)


## Approach & Efficiency
this code searches for an element in array and returns the element index that matches the key.
- worked with Jason Wilson
- Location: 'codechallenges/binary-search/binary-search.jpg'
- Method: binary-search(int []x, int target);

### Challenge 05 <a name="challenge05"></a>
### Whiteboard Process
[AddSum WhiteBoarding](Public/AddSum.jpg)
## Approach & Efficiency
- the code adds the sum of each row in the matrix. Then the sum is returned into a new array.
- the Time complexity is O(n) and space is O(1);


# Challenge Summary - Insertion Sort <a name="challenge26"></a>
- sort an unsorted array using insertion sort algorithm
## WhiteBoard Process
 - ![Whiteboarding](Public/Code-Challenge-26.jpg)
 - [Coded Algorthm](lib/src/main/java/datastructures/array/insertionsort/InsertionSort.java)
 - [Test Algorthm](lib/src/test/java/datastructures/array/InsertionSortTest.java)

## Approach & Efficiency
- Insertion sort asserts everything before the key element is sorted. then traverses the sorted portion and inserts at element where  key is > then before element and > then after element replacing the key with the data at replaced element location.
- this process happens over and over.
- thus, this process uses two loops to iterate. one for iterating N elements and the other to travers sorted portion of array.
- next we have constant time variables and nothing new is created.
- thus, the time complexity Big O is O(N^2) and worst space complexity is O(1)
- ![Math Logic Big O](Public/BigOMath.jpg)
## Contributors




# Challenge Summary - Merge Sort <a name="challenge27"></a>
- sort an unsorted array using merge sort algorithm
## WhiteBoard Process
- ![Whiteboarding](Public/Code-Challenge-27.jpg)
- [Coded Algorthm](lib/src/main/java/datastructures/array/mergesort/MergeSort.java)
- [Test Algorthm](lib/src/test/java/datastructures/array/MergeSortTest.java)

## Approach & Efficiency
- the process of this code is to create new arrays left and right. then after reaching n amount of arrays
- this process happens over and over.
- then after all is split, into an individual array, the sorting process happens. this takes length of n times for worst case.
- thus, this process uses N amount of space and we also have N time taken as the recusive call unwinds to compare elements.
- thus, the time complexity Big O is O(N*logn) and worst space complexity is O(N)
## Contributors

