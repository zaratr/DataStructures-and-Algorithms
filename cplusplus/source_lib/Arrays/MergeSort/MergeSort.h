/**
 * Merge sort by using Recursion. three members will be used to make this happen
 * */
class MergeSort{
	public:
		MergeSort(int [], int);
		int* getActual();
		int* mergeSort();
	private:
		int* mergeSort(int[]);
		int* merge(int[], int[], int[]);

		int* arr;
		int size;
};
