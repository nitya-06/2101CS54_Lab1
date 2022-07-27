											/* Merge Sort algorithm code */
#include <stdio.h>
#include <stdlib.h>

// function to Merge two subarrays of arr[]  ( arr[l..m] , arr[m+1..r] )
void merge(int arr[], int l, int m, int r)
{
	int i,j,k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* creating temporary arrays */
	int L[n1], R[n2];

	/* Copying the data to temp arrays L[] and R[] */
	for (int i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (int j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j]; 

	/* Mergeing the temporary arrays back into arr[l..r]*/
	i = 0; // index of first subarray
	j = 0; // index of second subarray
	k = l; // index of merged subarray
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copying the remaining elements of L[] */
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[] */
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

// function to implement merge sort
void mergeSort(int arr[], int l, int r)    //l is for left index and r is for right index of the subarray 
{
	if (l < r) {
		int m = l + (r - l) / 2;

		// Sorting the first halve
		mergeSort(arr, l, m);

		// Sorting the second halve
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r); // calling the merge function to finally merge the subarrays
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

	mergeSort(arr,0, n-1); // calling the merge sort function

	// printing the sorted array
	printf("the Sorted array is: \n");
	for (int i = 0; i < n; i++){
	printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
