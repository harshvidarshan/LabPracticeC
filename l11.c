//array structure of student detail for 5 student
#include<stdio.h>
struct stu
{
	int eno;
	int sem;
	char name;
	float cpi;		
};
void main()
{
	int i;
	struct stu s;
	for(i=0;i<5;i++)
	{
		printf("eno: ");
		scanf("%d",&s.eno);
		printf("sem: ");
		scanf("%d",&s.sem);
		printf("name: ");
		scanf("%s",&s.name);
		printf("cpi: ");
		scanf("%f",&s.cpi);
	}
	for(i=0;i<5;i++)
	{
		printf("eno:%d",s.eno);
		printf("sem:%d",s.sem);
		printf("name:%s",s.name);
		printf("cpi:%0.2f",s.cpi);
	}	
}
