#include <stdio.h>

int main(){
	char str[]="Rohit Rathi";
	char *ptr=str;
	printf("%s\n",str );
	while(*ptr!='\0'){
		printf("%c",*ptr );
		ptr++;
	}
	printf("\n");
	return 0;
}
