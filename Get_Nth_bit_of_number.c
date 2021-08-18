#include <stdio.h>

int main()
{
    int j, n, bitStatus;
    printf("Enter any number: ");
    scanf("%d", &j);
	printf("Enter nth bit to check (0-31): ");
    scanf("%d", &n);
	bitStatus = (j >> n) & 1;
	printf("The %d bit is set to %d", n, bitStatus);

    return 0;
}

