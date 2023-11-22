#include <stdio.h>

int main(void)/*Entry point of the program*/

{
	char Student_Name[50];
	char Residence[50];
	int Age;
	float Height;
	char Gender;

	/*Adjima's school registration form*/
	
	
	printf("This is a school registration form\n");
	
	/*takes and prints tye name of the student*/
	printf("NAME:");
	scanf("%[^\n]%*c", Student_Name);


	/*takes and prints the residence of the student*/
	printf("RESIDENCE:");
	scanf("%[^\n]%*c", Residence);
	


	/*takes the age of the student*/
	printf("Age:");
	scanf("%d", &Age);
	

	/*takes and prints the height of the student in inches*/
	printf("Height:");
	scanf("%f", &Height);


	/*takes and prints the gender of the student*/
	printf("Gender:");
	scanf("%c", &Gender);
	

	printf("Student's name is %s\n", Student_Name);
	printf("Student's residence is %s\n", Residence);
	printf("Age of student is %d\n", Age);
	printf("Height(in inches)of student is %.2f\n", Height);
	printf("Gender of student is %c\n",Gender);

	return 0;

}	






		
