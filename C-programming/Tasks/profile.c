#include <stdio.h>

int main(void)/*Entry point of the program*/

{
	char *Student_Name[50];
	char *Residence[50];
	int Age;
	float Height;
	char Gender;

	/*Adjima's school registration form*/
	
	
	printf("This is a school registration form\n");
	
	/*takes and prints tye name of the student*/
	printf("NAME:");
	scanf("%[^\n]%*c", Student_Name);
	printf("student's name is %s\n", Student_Name);

	/*takes and prints the residence of the student*/
	printf("RESIDENCE:");
	scanf("%[^\n]%*c", Residence);
	printf("Residence:%s\n",Residence);


	/*takes the age of the student*/
	printf("Age:");
	scanf("%d", &Age);
	printf("Age:%d\n",Age);

	/*takes and prints the height of the student in inches*/
	printf("Height:");
	scanf("%f", &Height);
	printf("Height(in inches):%.2f\n",Height);

	/*takes and prints the gender of the student*/
	printf("Gender:");
	scanf("%c", &Gender);
	printf("Gender(M or F):%c\n",Gender);

	
	return 0;

}	






		
