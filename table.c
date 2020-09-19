#include <stdio.h>
void table(int *arr,int k,int n=10){
	for(int i=0;i<n;i++){
		arr[i]=k*(i+1);
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main(){
	int arr[3][10];
	table(arr[0],2);
	table(arr[1],7);
	table(arr[2],9);
	return 0;
}
