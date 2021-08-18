#include <stdio.h>

int main()
{
    int j, n, newj;

    printf("Enter any number: ");
    scanf("%d", &j);
    printf("Enter nth bit to set (0-31): ");
    scanf("%d", &n);
    newj = (1 << n) | j;
	printf("Bit set successfully.\n\n");
    printf("Number before setting %d bit: %d (in decimal)\n", n, j);
    printf("Number after setting %d bit: %d (in decimal)\n", n, newj);

    return 0;
}
