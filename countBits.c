//Count the number of set bits in binary representation of numbers from 1 to n

#include <stdio.h>
#include <conio.h>

unsigned int CountBitsUtil(int x){
	if(x <= 0)
		return 0;
	else{
		return (x % 2 == 0 ? 0 : 1) + CountBitsUtil(x/2);
	}
}

unsigned int CountBits(int n){
	int i, count = 0;
	for(i = 1; i <= n; i++){
		count += CountBitsUtil(i);
	}
	return count;
}

int main(){
	printf("Enter the value for n : ");
	int n, count;
	scanf("%d", &n);
	count = CountBits(n);
	printf("Bit Count: %d", count);
	return 0;
}