                              // Quick sort algorithm code

#include <stdio.h>

// function to swap two numbers
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to find the partition position
int partition(int array[], int low, int high) {
  
  // selecting the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traversing through each element of the array and comparing them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      // swapping element at i with element at j
      swap(&array[i], &array[j]);
    }
  }
  // swapping the pivot element with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // returning to the partition point
  return (i + 1);
}

// function to implement quick sort
void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    // finding the pivot element
    int pi = partition(array, low, high);
    
    //calling quick sort for the left of pivot
    quickSort(array, low, pi - 1);
    
    //calling quick sort for the right of pivot
    quickSort(array, pi + 1, high);
  }
}

int main() {

	int n;
	printf("Enter the Size of array:\n");
	scanf("%d",&n);

	int arr[n];
	printf("Enter elements of the Array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
  
  quickSort(arr, 0, n - 1);  // calling the quick sort function
  
	// printing the sorted array
	printf("the Sorted array is: \n");
	for (int i = 0; i < n; i++){
	printf("%d ", arr[i]);
	}
	printf("\n");

  return 0;
}