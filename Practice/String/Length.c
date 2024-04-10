

#include <stdio.h>
#define MAX_SIZE 100 

int main()
{
    char text[MAX_SIZE]; 
    int i;
    int count= 0;

    /* Input a string from user */
    printf("Enter any string: ");
    fgets(text, sizeof(text), stdin);

    /* Iterate till the last character of string */
    for(i=0;  text[i] != '\n' && text[i] != '\0'; i++)
    {
        count++;
    }

    printf("Length of %s = %d\n", text, count);

    return 0;
}