#include <stdio.h>

int main(){
	FILE *ptr1,*ptr2;
	int num,num2;
	ptr1 = fopen("sample1.txt","r"); // for reading the file
	// ptr2 = fopen("sample1.txt","w"); // for writing in the file
	if(ptr1 == NULL){
		printf("This file does not exist!\n");
	}
	else{
		fscanf(ptr1,"%d",&num);
		fscanf(ptr1,"%d",&num2);
		fclose(ptr1);
		printf("The value of num is %d\n",num);
		printf("The value of num2 is %d\n",num2);
	}
	

	return 0;
}
