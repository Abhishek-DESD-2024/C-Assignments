/*Declare a structure to store data for student information. The structure contains roll number,
name, marks for students. Write a program to accept information of student from user and print
the same*/



#include <stdio.h>

struct student
{
	int rollno;
	char name[20];
	float marks;

};

int main(void)

{
	struct student s1;
	
	printf("Enter roll no : ");
	scanf("%d", &s1.rollno);

	printf("Enter name : ");
	scanf("%*c%[^\n]s", s1.name);

	printf("Enter marks : ");
	scanf("%f", &s1.marks);

	printf("rollno = %d, name = %s, marks = %f\n", s1.rollno, s1.name, s1.marks);







	return 0;
}
