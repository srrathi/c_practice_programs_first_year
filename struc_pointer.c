#include <stdio.h>
#include <string.h>

struct employee
{
	int code;
	float salary;
	char name[20];
};

int main(){
	struct employee e1;
	struct employee *ptr;
	ptr = &e1;

	(*ptr).code=401; //ptr->code = 401 (It will also do the same)(ARROW OPERATOR)
	(*ptr).salary=225.50;
	strcpy((*ptr).name,"Rohit");

	printf("The code for employee 1 is : %d\n",(*ptr).code);
	printf("The name of employee 1 is %s\n",(*ptr).name );
	printf("The salary of employee 1 is %.3f\n\n",(*ptr).salary );


	return 0;
}
