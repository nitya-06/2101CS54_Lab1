											// selection sort algorithm code
#include <stdio.h>

void swap(int *x, int *y) // function to swap two number
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

// function to implement selection sort
void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one moveing the boundary of unsorted subarray
	for (i = 0; i < n-1; i++)
	{
		min_idx = i; // minimum element in unsorted array
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Swapping the minimum element with the first element
		swap(&arr[min_idx], &arr[i]);
	}
}

int main()
{
	int n;
	printf("Enter the Size of array:\n");
	scanf("%d",&n);

	int arr[n];
	printf("Enter elements of the Array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	selectionSort(arr, n); // calling the selection sort function

	// printing the sorted array
	printf("the Sorted array is: \n");
	for (int i = 0; i < n; i++){
	printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;

}
