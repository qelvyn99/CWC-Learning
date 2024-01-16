#include <stdio.h>
#include <string.h>

void concatenateStrings(char name[], char name1[]);

int main(void)
{
    char name[25];
    char name1[25];

    concatenateStrings(name,name1);

    printf("Enter the first string:");
    scanf ("%s",name);

    printf("Enter the second string:");
    scanf ("%s",name1);

    return(0);
}


void concatenateStrings(char name[], char name1[])


    /** 
     * concatenate name1 to name
     *results is stored in name
     */
    strcat(name, name1);

    printf("Concatenated String is %s\n", name);
    printf("Length of Concatenated String is %ld\n", strlen(concatenateStrings);

    
    return(concatenateStrings);
}
