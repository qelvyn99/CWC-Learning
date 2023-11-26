#include <stdio.h>

int main(void)
{
    /*Declare variables to represent ages*/ 
    int age1, age2, age3;

    /* Prompt user for age input*/
    printf("Enter age for person 1: ");
    scanf("%d", &age1);

    printf("Enter age for person 2: ");
    scanf("%d", &age2);

    printf("Enter age for person 3: ");
    scanf("%d", &age3);

    /* Perform comparisons and logical operations*/
    if ((age1 > age2) && (age1 > age3)) 
    {
        printf("Person 1 is the oldest.\n");
    } 
    else if ((age2 > age1) && (age2 > age3)) 
    {
        printf("Person 2 is the oldest.\n");
    } 
    else if ((age3 > age1) && (age3 > age2)) 
    {
        printf("Person 3 is the oldest.\n");
    } 
    else 
    {
        printf("There is a tie in ages.\n");
    }

    if ((age1 == age2) && (age1 != age3) && (age2 != age3)) 
    {
        printf("At least two persons share the same age.\n");
    } 
    else
    {
        printf("No two persons share the same age.\n");
    }

    return (0);
}
