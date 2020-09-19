#include <stdio.h>

int main(){
	int num = 45;
	FILE *fptr;
	fptr = fopen("generated.txt","w");
	fprintf(fptr, "The number is %d\n",num );
	fclose(fptr);
	return 0;
}
