#include <stdio.h>
void inputArray(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Input a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
// Function to find the last odd number in the array
int findLastOdd(int arr[], int size) {
    int last_odd = arr[size - 1]; // Initialize with the last element of the array

    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] % 2 != 0) {
            last_odd = arr[i];
            break;
        }
    }
    return last_odd;
}

int main() {
    int size, arr[size];
	printf("Input size: ");
	scanf("%d", &size);
	inputArray(arr, size);

    int last_odd = findLastOdd(arr, size);

    // If no odd number found, print the last value of the array
    if (last_odd % 2 == 0) {
        printf("No odd numbers found. Last value of the array: %d\n", arr[size - 1]);
    } else {
        printf("The last odd number in the array is: %d\n", last_odd);
    }

    return 0;
}

