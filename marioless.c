#include <stdio.h>

int main(void)
{
	int height;
	int pound_height = 2;
	int space_height = 1;

	printf("Height: ");	
	scanf("%d", &height);
			
	
	if (height > 23 || height < 0) 
	{	
		return 1;	// exception handling 	
	}

	for(int k = 0; k < height; k++)
	{
		for(int j = height; j > space_height; j--)
		{
			printf(" ");
		}

		for(int i = 0; i < pound_height; i++)
		{
			printf("#");
		}

		pound_height = pound_height + 1;
		space_height = space_height + 1;		
		printf("\n");
	}

	return 0;

}
