#include <stdio.h>
int strlength(char *str){
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i;

}
int main(){
	char str[40];
	printf("Enter the string :\n");
	scanf("%s",str);
	int c=strlength(str);
	printf("The length of the string is %d\n",c);
	return 0;
}
