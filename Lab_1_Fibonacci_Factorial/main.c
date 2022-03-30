#include <stdio.h>
#include <stdlib.h>

int main()
{
    // For Factorial Number:

    printf("For Factorial Number\n");

    int number;
    int factorial = 1;

    printf("Enter a number : ");
    scanf("%d",&number);

    for(int i = 1; i<=number; i++ ){
        factorial = factorial * i;
    }
    printf("%d",factorial);

    printf("\nFor Fibonacci\n");

    // For Fibonacci Series

    int first = 0;
    int second = 1;
    int fibonacci;
    int n;

    printf("Enter number length : ");
    scanf("%d",&n);

    printf("%d",first,second);

    for(int i = 3; i<=n;i++){
        fibonacci= first+second;
        printf("%d ",fibonacci);
        first = second;
        second = fibonacci;
    }

    return 0;
}
