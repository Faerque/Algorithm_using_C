#include <stdio.h>
#include <stdlib.h>


int kadane(int A[], int n)
{
    int Max_current = A[0];
    int Max_global = A[0];

    for(int i = 0;i<n; i++)
    {

        int max = Max_current+A[i];
        if(A[i]<max)
            Max_current=max;
        else
            Max_current = A[i];

        if(Max_global<Max_current)
            Max_global=Max_current;
    }
    return Max_global;

}
int main()
{
    int A[] ={-2,3,2,-1};
    int size = sizeof(A)/sizeof(A[0]);
    int result;

    result = kadane(A,size);
    printf("Maximum sum sub array is : %d", result);

    return 0;

}
