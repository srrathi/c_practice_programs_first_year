#include <stdio.h>

int main(){
	int i=10 , b=20;
	int *j=&i , *k=&b;
	printf("The pointer 1 is %u\n",j);
	printf("The pointer 2 is %u\n",k);
	printf("The sum of pointer and number is %u\n",j+i);
	printf("The difference of pointer and number is %u\n",j-i);
	printf("The difference of two pointers is %u\n",k-j);
	// printf("The sum of two pointers is %u\n",j+k);
	return 0;
}
