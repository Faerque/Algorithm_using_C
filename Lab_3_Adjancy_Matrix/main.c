#include <stdio.h>
#include <stdlib.h>


int main()
{
    char str1[4];
    char str2[4];
    printf("Input strings 1: ");
    scanf("%s",str1);
    printf("Input strings 2: ");
    scanf("%s",str2);
    printf("String 1 is %s\n", str1);
    printf("String 2 is %s\n", str2);
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    printf("String length is %d\n", length1);
    printf("String length is %d", length2);

    return 0;
}
