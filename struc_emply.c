#include <stdio.h>
#include <string.h>
struct employee
{
	int code;
	float salary;
	char name[20];
};
int main(){
	struct employee e1, e2, e3;

	e1.code=401;
	e1.salary=225.50;
	strcpy(e1.name,"Rohit");

	e2.code=402;
	e2.salary=225.50;
	strcpy(e2.name,"Raja");

	e3.code=403;
	e3.salary=225.50;
	strcpy(e3.name,"Golu");

	printf("The code for employee 1 is : %d\n",e1.code);
	printf("The name of employee 1 is %s\n",e1.name );
	printf("The salary of employee 1 is %.3f\n\n",e1.salary );

	printf("The code for employee 2 is : %d\n",e2.code);
	printf("The name of employee 2 is %s\n",e2.name );
	printf("The salary of employee 2 is %.3f\n\n",e2.salary );

	printf("The code for employee 3 is : %d\n",e3.code);
	printf("The name of employee 3 is %s\n",e3.name );
	printf("The salary of employee 3 is %.3f\n\n",e3.salary );
	
	return 0;
}
