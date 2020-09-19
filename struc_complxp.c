#include <stdio.h>
typedef struct complex
{
	float real;
	float img;	
}cpx;

void display(cpx c){
	printf("The complex no. is %.2f+%.2fi\n\n",c.real,c.img);
}
int main(){
	cpx c[5];
	for(int i=0;i<5;i++){
		printf("Enter the real and imaginary part of %d complex no. :\n",i+1);
		scanf("%f %f",&c[i].real,&c[i].img);
	}
	for(int i=0;i<5;i++){
		display(c[i]);
	}
	return 0;
}
