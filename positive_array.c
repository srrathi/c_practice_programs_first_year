#include <stdio.h>
int positive(int *arr,int n){
	int count;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			count++;
		}
	}
	return count;
}
int main(){
	int n;
	printf("Enter the no. of elements you want to enter in array :\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array :\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int result = positive(arr,n);
	printf("The no. of positive terms in array is %d\n",result );
	return 0;
}
