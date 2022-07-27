											// insertion sort algorithm code
#include <math.h>
#include <stdio.h>

/* Function to implement insertion sort*/
void insertionSort(int arr[], int n)
{
	int j;
	for (int i = 1; i < n; i++)
	{
		int key = arr[i];
		j = i - 1;

		/* Moveing elements of arr[0..i-1], which are greater than the key,
		to one position ahead of their current position */
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
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

	insertionSort(arr, n); // calling the insertion sort function

	// printing the sorted array
	printf("the Sorted array is: \n");
	for (int i = 0; i < n; i++){
	printf("%d ", arr[i]);
	}
	printf("\n");


	return 0;
}
