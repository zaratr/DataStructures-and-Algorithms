# Data Structures

## Implementation Notes

## Code Challenges

### Challenge 01

# Reverse an Array
- Write a function called reverseArray which takes an array as an argument. Without utilizing any of the built-in methods available to your language, return an array with elements in reversed order.


## Whiteboard Process
[reverse-array Whiteboarding](Public/reverse-array.pdf)


## Approach & Efficiency
I knew that going through an array can be done recursively or iteratively.
Further, I knew that no changes to memory since we don't add or remove any element.
Thus, the simplest way to approach this problem was to
implement iteratively by using a while loop and having a temporary
variable to hold a value of either the front or the end of the array.
After I have swapped first and end elements in the array, I would need to then decrement
end and increment front pointers by one. since we only use one loop and n elements of the array
is being traversed
Time: O(n) because we iterate through full array is worse case and Space: O(1) no extra memory is added per each
iteration
Location: 'codechallenges/Reverse-Array/reverse-array'
Method: reverse-array(int []);
Location: `codechallenges/linkedlist/LinkedListChallenges`

## Whiteboard Process
[insert-Shift-Array Whiteboarding](Public/codechallenge2.pdf)


## Approach & Efficiency
After reviewing the barriers of nonrecursive problems and language limitation, I figured the best solution
is to iteratively create a new array with old array contents with target element at the middle of array. once newArray is configured,
I may use the assignment operator(dangerously) to replace old array and return old array (although it would still
just be a new array at the end of day) or just return new array (without the usage of Arraylist - as instructed).
time usage is O(n) because it depends on how long the length of array is and Space is O(1) because we dont iterate through
and add more memory

Location: 'codechallenges/insertShift/insertShiftArray'
Method: insertShiftArray(int []x);

