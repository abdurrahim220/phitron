#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main()
{
    char text1[MAX_SIZE];
    char text2[MAX_SIZE];
    int i;
    printf("Enter any string : ");
    fgets(text1, sizeof(text1), stdin);
    // for (i = 0; text1[i] != '\n' && text1[i] != '\0'; i++)
    // {
    //     text2[i] = text1[i];
    // }
    // text2[i] != '\0';
    strcpy(text2, text1);
    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);
    // printf("Total characters copied = %d\n", i);

    return 0;
}