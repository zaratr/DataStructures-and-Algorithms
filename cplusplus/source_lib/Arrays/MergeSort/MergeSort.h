/**
 * Merge sort by using Recursion. three members will be used to make this happen
 * */
#include <vector>
class MergeSort{
	public:
		MergeSort(std::vector<int>, int);
		std::vector<int> mergeSort();
        std::vector<int> getActual();
	private:
		std::vector<int> mergeSort(vector<int>);
		std::vector<int> merge(vector<int>, vector<int>, vector<int>);

		vector<int> arr;
		int size;
};
