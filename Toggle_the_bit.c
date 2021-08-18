#include <stdio.h>

int main()
{
    int j, n, newj;
	printf("Enter any number: ");
    scanf("%d", &j);
	printf("Enter nth bit to toggle (0-31): ");
    scanf("%d", &n);
    newj = j ^ (1 << n);

    printf("Bit toggled successfully.\n\n");
    printf("Number before toggling %d bit: %d (in decimal)\n", n, j);
    printf("Number after toggling %d bit: %d (in decimal)\n", n, newj);

    return 0;
}

