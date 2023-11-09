#include <stdio.h>

int main(void)/*Entry point of the program*/

{
	char *Student_Name = "Kelvin Nyantakyi Owusu";
	char *Residence = "Tantra Hills";
	int Age = 24;
	float Height = 5.5;
	char Gender = 'M';

	/*printing each variable with its own format specifier*/
	
	/*prints the name of the student to the screen*/
	printf("Student's Name:%s\n",Student_Name);

	/*prints the place of residence of the student*/
	printf("Residence:%s\n",Residence);

	/*prints the age of the student*/
	printf("Age:%d\n",Age);

	/*prints the height of the student in inches*/
	printf("Height(in inches):%.2f\n",Height);

	/*prints the gender of the student*/
	printf("Gender(M or F):%c\n",Gender);

	
	return 0;

}	






		
