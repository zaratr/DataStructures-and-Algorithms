//
// Created by zarat on 2/20/2023.
//

#ifndef C___BINARYSEARCH_H
#define C___BINARYSEARCH_H

/** Binary Search divides and finds target number. Method 1 iterates through an array and uses three place holders for the index.
 * middle holds the location of element that equals the target.
 * <pre>
 * Time Complexity : O(lg N)
 * Space Complexity : O(1)
 * </pre>
 */
class BinarySearch {
public:
    /**
     * traverses a sorted array and finds the mid array by traversing half the array on each instance.
     * @param array of integers, target integer, size of integer.
     * @return  int - integer index where element is located
     */
    int binarySearch(int[], int, int);
};


#endif //C___BINARYSEARCH_H
