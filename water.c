#include <stdio.h>

int main(void)
{

	int minutes;

	printf("Minutes: ");
	scanf("%d", &minutes);
	
	int bottles = minutes * 12;
	printf("Bottles: %d\n", bottles);
	

	return 0;
}
