#include <stdio.h>

int main(void)
{
	int height;
	int spaces_offset = 1;
	int blocks_offset = 1;
	
	printf("Height: ");
	scanf("%d", &height);

	if (height > 23 || height < 0)
	{
		return 1;	
	}
	
	for(int i = 0; i < height; i++) //print 4 rows
	{
		for(int j = height; j > spaces_offset; j--)
		{
  			printf(" ");
		}

		for(int k = 0 ; k < blocks_offset; k++)
		{
			printf("#");
		}

		printf("  ");		

		for(int k = 0 ; k < blocks_offset; k++)
		{
			printf("#");
		}		
		blocks_offset = blocks_offset + 1;  
		spaces_offset = spaces_offset + 1;
		printf("\n");
	} 
}
