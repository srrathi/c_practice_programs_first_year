#include <stdio.h>
typedef struct complex
{
	float real;
	float img;	
}cpx;
cpx sumvector(cpx c1,cpx c2) {
	cpx c;
	c.real = c1.real+c2.real;
	c.img = c1.img+c2.img;
	return c;
}
int main(){
	cpx c1,c2,c;
	c1.real = 2;
	c1.img = 5;
	printf("The complex no is %.2f + %.2fi\n",c1.real,c1.img);

	c2.real = 5;
	c2.img = 5;
	printf("The complex no is %.2f + %.2fi\n",c2.real,c2.img);

	c = sumvector(c1,c2);
	printf("The sum of complex no's is %.2f + %.2fi\n",c.real,c.img);
	return 0;
}
