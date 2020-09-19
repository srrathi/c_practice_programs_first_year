#include <stdio.h>

void slice(char str[],int m, int n)
{
	int i=0;
	while((i+m)<n){
		str[i]=str[i+m];
		i++;
	}
	str[i]='\0';
}

int main(){
	char st[]="hello I'm Rohit";
	slice(st,1,5);
	printf("%s\n",st);
	return 0;
}
