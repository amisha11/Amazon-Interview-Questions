//Spiral print a 2-D array

#include <stdio.h>
#include <conio.h>

void spiral(int arr[10][10], int m, int n){
	int i, j, k, l, z;
	printf("\n");
	for(i = 0; i < (m + 1) / 2; i++){
		for(j = i; j < n - i; j++){
			printf("%d ", arr[i][j]);
		}
		for(k = i + 1; k < m - i; k++){
			printf("%d ", arr[k][n - i - 1]);
		}
		for(l = n - i - 2; l > i; l--){
			printf("%d ", arr[m - i - 1][l]);
		}
		for(z = m - i - 1; z > i; z--){
			printf("%d ", arr[z][i]);
		}
	}
}

//Driver program
int main(){
	printf("Enter rows and columns: ");
	int m, n, i, j;
	scanf("%d%d", &m, &n);
	int arr[10][10];
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	spiral(arr, m, n);
	return 0;
}