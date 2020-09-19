#include <stdio.h>
float average(int a,int b,int c){
	float result;
	result = (float)(a+b+c)/3;
	return result;
}
int main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("The average is %f\n",average(a,b,c));
	return 0;
}