#include <stdio.h>
void swap(int *a,int *b){
	printf("The value of a is %d and b is %d before swap\n",*a,*b);
	(*a) = (*a) + (*b);
	(*b) = (*a) - (*b);
	(*a) = (*a) - (*b);
	printf("The value of a is %d and b is %d after swap\n",*a,*b);
}
int main(){
	int a = 7,b = 12;
	int *i=&a,*j=&b;
	swap(i,j);
	printf("a is %d and b is %d\n",a,b);
	return 0;
}
