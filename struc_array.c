#include <stdio.h>
#include <string.h>

struct employee
{
	int code;
	float salary;
	char name[20];
};
int main(){
	struct employee e[10];

	e[0].code=401;
	e[0].salary=225.50;
	strcpy(e[0].name,"Rohit");

	e[1].code=402;
	e[1].salary=225.50;
	strcpy(e[1].name,"Raja");

	e[2].code=403;
	e[2].salary=225.50;
	strcpy(e[2].name,"Golu");

	printf("The code for employee 1 is : %d\n",e[0].code);
	printf("The name of employee 1 is : %s\n",e[0].name );
	printf("The salary of employee 1 is : %.3f\n\n",e[0].salary );

	printf("The code for employee 2 is : %d\n",e[1].code);
	printf("The name of employee 2 is : %s\n",e[1].name );
	printf("The salary of employee 2 is : %.3f\n\n",e[1].salary );

	printf("The code for employee 3 is : %d\n",e[2].code);
	printf("The name of employee 3 is : %s\n",e[2].name );
	printf("The salary of employee 3 is : %.3f\n\n",e[2].salary );

	
	return 0;
}
