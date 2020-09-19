#include <stdio.h>
void printarr(int ptr[],int n){
	ptr[2]=345;
}
int main(){
	int arr[4];
	int *ptr;
	
	ptr = &arr[0];
	for(int i=0;i<4;i++){
		printf("Enter the value of marks of student %d\n",i+1);
		scanf("%d",ptr+i);
	}
	// ptr=&arr[0];
	for(int i=0;i<4;i++){
		printf("The value of marks of student %d is %d\n",i+1,*ptr);
		ptr++;
	}
	printarr(arr,4);
	printf("3rd element is %d\n",arr[2]);
	return 0;
}
