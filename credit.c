#include <stdio.h>

int main(void)
{
	long long int i, card, even, odd, digit, number;	
	i=card=even=odd=digit=number=0;	
	printf("Number: ");
	scanf("%lli", &number);
					
	for(i = 0; number > 1 ;i++){
			
		if(number < 100 && number > 9){
			card = number;	
		}
		
		digit = number % 10;

		if(i % 2 == 1){
			even += digit*2 % 10;
			if(digit > 5){
			even += 1;
			}
		}
		else if(i % 2 == 0){
			odd += digit;
		}	
	
		number /= 10;
			
	}
		
	int checksum = odd + even;


	if(checksum % 10 == 0){
		if(card == 34 || card == 37){
			printf("AMEX\n");
		}
		else if(card > 50 && card < 56){
			printf("MASTERCARD\n");
		}
		else if(card > 39 && card < 50){
			printf("VISA\n");
		}
		else{
			printf("INVALID\n");
		}
	}			
	else{
		printf("INVALID\n");
	}
}
