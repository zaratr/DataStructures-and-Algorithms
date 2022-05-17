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

Location: 'codechallenges/Reverse-Array/reverse-array'
Method: reverse-array(int []);
Location: `codechallenges/linkedlist/LinkedListChallenges`

Method: `linkedListChallenge06()`
