#include <stdio.h>

int main()
{
    int j, n, newj;
	printf("Enter any number: ");
    scanf("%d", &j);
	printf("Enter nth bit to clear (0-31): ");
    scanf("%d", &n);
    newj = j & (~(1 << n));

    printf("Bit cleared successfully.\n\n");
    printf("Number before clearing %d bit: %d (in decimal)\n", n, j);
    printf("Number after clearing %d bit: %d (in decimal)\n", n, newj);

    return 0;
}
