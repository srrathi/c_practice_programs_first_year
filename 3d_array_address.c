#include <stdio.h>

int main(){
	int a[3][3][3];
	a[0][0][0] = 0;
	int *ptr;
	ptr = &a[0][0][0];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				printf("The address of a[%d][%d][%d] is %u\n",i,j,k,ptr);
				ptr++;
			}
		}
	}
	return 0;
}
