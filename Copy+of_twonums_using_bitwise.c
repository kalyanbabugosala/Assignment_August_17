#include <stdio.h>

int main()
{
    int i ;
    int k ;
    printf("Enter first value:");
    scanf("%d",&i);
    printf("Enter second number:");
    scanf("%d",&k);
    printf("value of i=%d k=%d before swapping\n", i, k);

    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("value of i=%d k=%d after swapping", i, k);

    return 0;
}
