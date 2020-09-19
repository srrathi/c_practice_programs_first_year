#include <stdio.h>
int sum(int x){
	if(x==1){
		return 1;
	}
	else{
		return x + sum(x-1);
	}
}
int main(){
	int a,b;
	printf("Enter the term till which sum you want to obtain :\n");
	scanf("%d",&a);
	b = sum(a);
	printf("The sum is %d\n",b);
	return 0;
}
