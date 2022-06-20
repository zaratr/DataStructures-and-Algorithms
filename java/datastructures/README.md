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


#Challenge Summary - Insertion Sort <a name="challenge26"></a>
- Find the sum of all the odd numbers in a binary search tree.
- Any of the traversals (depth or breadth) will work for this
## WhiteBoard Process

## Approach & Efficiency
- data structure only uses recursion implemented to get through the worst all children. we get O(N).
- no new nodes are created.
- therefore, it time O(N) and recreating new nodes is O(1) space
## Contributors



