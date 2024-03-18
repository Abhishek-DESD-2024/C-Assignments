/*Write a function to accept student information from the user. Write another function to print
student’s information. Re-use these functions in rest of the assignments wherever required*/

#include <stdio.h>

typedef struct student
{
	int rollno ;
	char name[25];
	float marks;
	char addr[10];

}std;

void accept_student(std *s);
void print_student(std s);

struct student S1;


int main(void)

{

	std s1;

	accept_student(&s1);

	print_student(s1);



	return 0;
}

void accept_student(std *s)
{
	printf("Enter the student data(rollno. ,name,marks,addr):");
	scanf("%d %s %f %s",&s->rollno, s->name, &s->marks,s->addr);
}
void print_student(std s)
{
	printf("rollno = %d\nname = %s\nmarks = %f \nAddress = %s\n", s.rollno, s.name, s.marks, s.addr);

}
