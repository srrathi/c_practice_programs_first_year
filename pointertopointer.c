#include <stdio.h>

int main(){
	int a = 4;
	printf("The value of a printed using pointer to pointer approach is %d\n",*(&(*(&a))));
	return 0;
}
