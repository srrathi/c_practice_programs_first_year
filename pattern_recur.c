#include <stdio.h>
void pattern(int n){
	int i;
	if(n==1){
		printf("*\n");
		return;
	}
	pattern(n-1);
	for(i=1;i<=2*n-1;i++){
		printf("*");
	}
	printf("\n");
}

int main(){
	int n;
	printf("Enter the no. of columns\n");
	scanf("%d",&n);
	pattern(n);
	return 0;
}
