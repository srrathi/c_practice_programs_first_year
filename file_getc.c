#include <stdio.h>

int main(){
	FILE *ptr;
	// ptr = fopen("getcdemo.txt","r");
	// // char c = fgetc(ptr);
	// printf("The value of my character in text file is %c\n",fgetc(ptr) );
	// printf("The value of my character in text file is %c\n",fgetc(ptr) );
	// printf("The value of my character in text file is %c\n",fgetc(ptr) );
	// printf("The value of my character in text file is %c\n",fgetc(ptr) );
	// printf("The value of my character in text file is %c\n",fgetc(ptr) );
	// printf("The value of my character in text file is %c\n",fgetc(ptr) );
	// printf("The value of my character in text file is %c\n",fgetc(ptr) );


	ptr = fopen("putcdemo.txt","w");
	putc('c',ptr);
	putc('c',ptr);
	putc('c',ptr);
	putc('c',ptr);
	fclose(ptr);

	return 0;
}
