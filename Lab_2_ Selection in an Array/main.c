#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Selection in an Array

    int ArraySize;
    printf("Enter the value of array size: ");
    scanf("%d",&ArraySize);//input array size
    int a[ArraySize];
    for(int i=0;i<ArraySize;i++){
    printf("Enter array value: ");
    scanf("%d",&a[i]);//input array value
    }
    a[ArraySize];

    for(int i = 0; i<ArraySize-1;i++){
        int minimum = i;
        for(int j = i+1; j <ArraySize; j++){
            if(a[j]<a[minimum]){
                minimum = j;
            }

        }
        // Swapping
        int temp = a[minimum];
        a[minimum] = a[i];
        a[i] = temp;
    }
    printf("After Selection: \n");
    for(int i = 0; i<ArraySize;++i){
        printf(" %d", a[i]);
    }

    return 0;
}
