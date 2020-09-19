#include <stdio.h>

int main(){
	char str1[35];
	printf("Enter your name :\n");
	fgets(str1,sizeof(str1),stdin); //here size of str1 is returning value 35
	printf("Your name is %s\n",str1);
	puts(str1);
	printf("size of str1 is :%lu\n",sizeof(str1));
	return 0;
}
