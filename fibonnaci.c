#include <stdio.h>
int fibonnaci(int x){
	if(x==1){
		return 0;
	}
	if(x==2){
		return 1;
	}
	else{
		return fibonnaci(x-1) + fibonnaci(x-2);
	}
}
int main()
{
	int a,b;
	printf("Enter the term no.\n");
	scanf("%d",&a);
	b = fibonnaci(a);
	printf("%d\n",b );
	return 0;
}