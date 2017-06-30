//Find minimum difference between any pair in an unsorted array O(nlogn)
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define INT_MAX 99999

int num1, num2;

void sort(int *array, int n){
	int i, j, temp;
	for(i = 0; i < n - 1; i++)
		for(j = i + 1; j < n; j++){
			if(array[i] > array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
}

int GetDiff(int arr[50], int n){
	int *array = arr;
	sort(array, n);
	int diff = INT_MAX, i;
	for(i = 0 ; i < n - 1; i++){
		if(abs(arr[i] - arr[i + 1]) < diff){
			diff = abs(arr[i] - arr[i + 1]);
			num1 = arr[i];
			num2 = arr[i + 1];
		}
	}
	return diff;
}

int main(){
	int arr[50], n, diff, i;
	printf("Enter the size of array : ");
	scanf("%d", &n);
	printf("Enter the elements of the array\n");
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	diff = GetDiff(arr, n);
	printf("Minimum difference: %d", diff);
	printf("\nMinimum difference is between %d and %d", num1, num2);
	return 0;
}