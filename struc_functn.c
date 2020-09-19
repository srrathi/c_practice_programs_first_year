#include <stdio.h>
#include <string.h>

struct employee
{
	int code;
	float salary;
	char name[20];
};

void show(struct employee e){
	// strcpy(e.name,name);
	// e.code = code;
	// e.salary = salary;

	printf("The code for employee is : %d\n",e.code);
	printf("The name of employee is : %s\n",e.name );
	printf("The salary of employee is : %.3f\n\n",e.salary );
}

int main(){
	struct employee e1;
	e1.code = 195567;
	e1.salary = 225.5;
	strcpy(e1.name,"Rohit Rathi");

	struct employee e2;
	e2.code = 195500;
	e2.salary = 200.5;
	strcpy(e2.name,"Raja Rathi");
	

	show(e1);
	show(e2);
	return 0;
}
