/**
 * Merge sort by using Recursion. three members will be used to make this happen
 * */
#ifndef C___MERGESORT_H
#define C___MERGESORT_H
#include <vector>
class MergeSort{
	public:
		MergeSort(std::vector<int>, int);
		std::vector<int> mergeSort();
        std::vector<int> getActual();
	private:
		std::vector<int> mergeSort(std::vector<int>);
		std::vector<int> merge(std::vector<int>, std::vector<int>, std::vector<int>);

		std::vector<int> arr;
		int size;
};
#endif //C___MERGESORT_H