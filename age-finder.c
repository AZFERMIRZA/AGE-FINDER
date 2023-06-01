#include<stdio.h>
struct person{
	int day;
	int month;
	int year;
}p;
int main()
{
	int currentyear,age;
	printf("enter birth date:");
	int month;
	int year;
	scanf("%d-%d-%d",&p.day,&p.month,&p.year);
	printf("enter the currentyear:");	
	scanf("%d\n",&currentyear);
	age=currentyear-p.year;
	printf("\t %d years",age);
}