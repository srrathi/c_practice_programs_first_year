#include <stdio.h>
#include <string.h>
struct student
{
	int roll;
	char name[20];
	char branch[50];
	float marks;
};
int main(){
	struct student s1;
	s1.roll = 195567;
	strcpy(s1.name,"Sitaram Rathi");
	strcpy(s1.branch,"Computer Science Engineering");
	s1.marks = 225.50;
	
	printf("The roll no. of student is %d\n",s1.roll );
	printf("The name of student is %s\n",s1.name );
	printf("The branch of student is %s\n",s1.branch );
	printf("The marks of student is %.3f\n",s1.marks );

	return 0;
}
