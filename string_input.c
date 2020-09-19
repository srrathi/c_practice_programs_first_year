#include <stdio.h>
#include <string.h>

int main(){
	char s1[40],s2[40];
	char c;
	int i=0;
	printf("Enter the the string for s1 :\n");
	fgets(s1,40,stdin);
	printf("Enter the character by character string :\n");
	while(c!='\n'){
		fflush(stdin);
		c=getchar();
		s2[i]=c;
		i++;
	}

	int t=strlen(s1);
	s1[t-1]='\0';
	s2[i-1]='\0';
	printf("The string for s2 is %s\n",s2);
	printf("the comparison of both the strings is %d\n",strcmp(s1,s2));

	return 0;
}
