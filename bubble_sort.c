											// bubble sort algorithm code
#include <stdio.h>

void swap(int* x, int* y) // function to swap two numbers
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (arr[j] > arr[j + 1]){   
				swap(&arr[j], &arr[j + 1]);
			}
		}
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

	bubbleSort(arr, n); // calling the bubble sort function

	// printing the sorted array
	printf("the Sorted array is: \n");
	for (int i = 0; i < n; i++){
	printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
