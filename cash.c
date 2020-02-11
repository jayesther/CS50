#include <stdio.h>
#include <math.h> //needed for rounding

int main(void)
{
	int count = 0; // initialse variables
	int quarters = 25;	// ints used because pennies not 
	int dime = 10; 		// represented well in float
	int nickel = 5;
	int pennies = 1;
	
	float change;  // collects user input
	printf("Change owed: ");
	scanf("%f", &change);	
	
	change = change * 100; // convert float to int
	float roundf(float change); // rounds third decimal place away
	
	if(change < 0) //exception handling
	{ 	
		return 1;
	}
		
	for(;change >= quarters; change = change - quarters)	
	{
		count = count + 1;
	}	

	for(;change >= dime; change = change - dime)	
	{
		count = count + 1;
	}

	for(;change >= nickel; change = change - nickel)	
	{		
		count = count + 1;
	}

	for(;change >= pennies; change = change - pennies)	
	{
		count = count + 1;
	}
			
	printf("%d\n", count);
	return 0;
}
