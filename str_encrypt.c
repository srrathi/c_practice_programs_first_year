#include <stdio.h>
void encrypt(char str[]){
	char *ptr=str;
	while(*ptr!='\0'){
		*ptr=*ptr+1;
		ptr++;
	}
	*ptr='\0';
}

void decrypt(char str[]){
	char *ptr=str;
	while(*ptr!='\0'){
		*ptr=*ptr-1;
		ptr++;
	}
	*ptr='\0';
}
int main(){
	char c[]="come here in my room";
	encrypt(c);
	printf("%s\n",c);
	decrypt(c);
	printf("%s\n",c );
	return 0;
}
