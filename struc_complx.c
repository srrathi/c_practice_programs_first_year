#include <stdio.h>
typedef struct comlex
{
	float real;
	float img;	
}cpx;
int main(){
	cpx c1;
	c1.real = 2;
	c1.img = 5;
	printf("The complex no is %.2f + %.2fi\n",c1.real,c1.img);
	
	return 0;
}
