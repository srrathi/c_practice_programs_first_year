#include <stdio.h>
#include <string.h>
int main(){
	char str1[]="Hello ";
	char *str2="Rohit";
	printf("The length of str1 is %lu\n",strlen(str1));
	int a=strcmp(str1,str2);
	printf("%d\n",a );
	strcat(str1,str2);
	printf("%s\n",str1 );
	char str3[30];
	strcpy(str3,str2);
	printf("%s\n",str3 );
	return 0;
}
