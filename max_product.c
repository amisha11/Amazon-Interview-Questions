//maximise the product of three elements of the array

#include<stdio.h>

int max_prod(int arr[], int n){
	int i, max1 = 0, max2 = 0, max3 = 0, temp1, temp2, neg1 = 0, neg2 = 2;
	for(i = 0; i <n; i++){
		if(arr[i] > 0){
			if(arr[i] > max1){
				temp1 = max1;
				max1 = arr[i];
				temp2 = max2;
				max2 = temp1;
				max3 = temp2;
			}
			else if(arr[i] > max2){
				temp1 = max2;
				max2 = arr[i];
				max3 = temp1;
			}
			else if(arr[i] > max3){
				max3 = arr[i];
			}
		}
		else{
			if(neg1 > arr[i]){
				temp1 = neg1;
				neg1 = arr[i];
				neg2 = temp1;
			}
			else if(neg2 > arr[i])
				neg2 = arr[i];
		}
	}
	int prod1 = neg1 * neg2 * max1;
	int prod2 = max1 * max2 * max3;
	
	return ((prod1 > prod2) ? prod1 : prod2); 
}

//Driver program
int main(){
	int n, arr[30], i;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	int prod = max_prod(arr, n);
	printf("Max product of three elements of array is %d", prod);
	return 0;
}