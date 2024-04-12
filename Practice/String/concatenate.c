#include <stdio.h>
#define max_size 100
int main()
{
    char str1[max_size], str2[max_size];
    int i, j;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // i = 0;
    // while (str1[i] != '\0')
    // {
    //     i++;
    // }
    // j = 0;
    // while (str2[j] != '\0')
    // {
    //     str1[i] = str2[j];
    //     i++;
    //     j++;
    // }

    // str1[i] != '\0';
    i=-1;
    while (str1[++i])
    j=0;
    while (str1[i++]=str2[j++])
    
    
    

    
    printf("Concatenated string = %s", str1);

    return 0;
}