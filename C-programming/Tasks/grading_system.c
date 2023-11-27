#include <stdio.h>

int main (void)

{
	/*Declares a variable that stores the student's exam scores*/
	int Exam_Score;

	/*Takes the user's input of the exam score*/
	printf("Enter the student's exam score:");
	scanf("%d" , &Exam_Score);
	
	/*using if-else-if statements to determine the grade of a student*/
	if ( Exam_Score >= 90)
	{
		/*prints a message for Grade A marks*/
		printf("Grade:A\n");
	}
	else if (Exam_Score >= 80 && Exam_Score <= 89)	
	{
		/*prints a message for Grade B marks*/
		printf("Grade:B\n");
	}
	else if (Exam_Score >= 70 && Exam_Score <= 79)
	{
		/*prints a message for Grade C marks*/
		printf("Grade:C\n");
	}
	else if (Exam_Score >= 60 && Exam_Score <= 69)
	{
		/*prints a message for Grade D marks*/
		printf("Grade:D\n");
	}
	if (Exam_Score < 60)
	{
		/*prints a message for Grade F marks*/
		printf("Grade:F\n");
	}

	return (0);
}


