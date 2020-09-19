#include <stdio.h>
void reverse(int *arr,int n){ // there will not be any difference if i replace int *arr with int arr[]
	int temp;
	for(int i=0;i<n/2;i++){
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	for(int i=0;i<n;i++){
		printf("The %dth element of array is %d\n",i+1,arr[i]);
	}
	arr[2]=343;
}
int main(){
	int arr[]={1,2,3,4,5,6,7};
	reverse(arr,7);
	printf("3rd element of array is %d\n",arr[2]);


	return 0;
}
