#include <stdio.h>
typedef struct timestamp
{
	int date;
	int month;
	int year;
	int hours;
	int minutes;
	int seconds;
}tstmp;

int compare(tstmp t1,tstmp t2){
	if(t1.year>t2.year){
		return 1;
	}
	if(t1.year<t2.year){
		return -1;
	}

	if(t1.month>t2.month){
		return 1;
	}
	if(t1.month<t2.month){
		return -1;
	}

	if(t1.date>t2.date){
		return 1;
	}
	if(t1.date<t2.date){
		return -1;
	}

	if(t1.hours>t2.hours){
		return 1;
	}
	if(t1.hours<t2.hours){
		return -1;
	}

	if(t1.minutes>t2.minutes){
		return 1;
	}
	if(t1.minutes<t2.minutes){
		return -1;
	}

	if(t1.seconds>t2.seconds){
		return 1;
	}
	if(t1.seconds<t2.seconds){
		return -1;
	}
	return 0;
}

void display(tstmp t){
	printf("time stamp date is %d/%d/%d time is %d-%d-%d\n",t.date,t.month,t.year,t.hours,t.minutes,t.seconds);
}

int main(){
	tstmp t1 = {11,9,20,22,16,16};
	tstmp t2 = {11,9,20,22,16,16};

	display(t1);
	display(t2);

	int a = compare(t1,t2);
	printf("The comparison of timestamps is %d\n",a);

	return 0;
}
