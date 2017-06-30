/* Flip m zero bits in array to get longest sequence of 1
   Input: array, n and m
   Output: indices of the flipped bits
   
   This is the method was suggested to me by the SDE interviewing me.
*/

#include<stdio.h>
#include<conio.h>

void flip(int arr[], int n, int m){
	int l = 0, r = 0, l_fin = 0, fin_win =0, zeroes = 0, i;
	while(r < n){
		if(zeroes <= m){
			if(arr[r] == 0)
				zeroes++;
			r++;
		}
		if(zeroes > m){
			if(arr[l] == 0)
				zeroes--;
			l++;
		}
		if((r - l) > fin_win){
			fin_win = r - l;
			l_fin = l;
		}
	}
	printf("Bits to be flipped: ");
	for(i = 0; i <= fin_win; i++){
		if(arr[i + l] == 0){
			printf("%d ", i + l);
		}
	}
}

int main(){
	int arr[30], n, m, i;
	printf("Enter length of array: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the number of zeroes to be flipped: ");
	scanf("%d", &m);
	flip(arr, n, m);
	return 0;
}
