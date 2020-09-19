#include <stdio.h>

int main(){
	int n;
	printf("Enter the no. of elements you want in array :\n");
	scanf("%d",&n);
	float X[n],A[n];
	for(int i=0;i<n;i++){
		X[i]=i;
	}
	A[0]=X[0];
	for(int i=1;i<n;i++){
		A[i]=A[i-1]+X[i];
		A[i-1]=(float)A[i-1]/i;
	}
	A[n-1]=(float)A[n-1]/n;
	for(int i=0;i<n;i++){
		printf("The average of X[%d] till %d term is %f\n",i,i+1,A[i]);
	}
	return 0;
}
