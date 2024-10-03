#include <stdio.h>


int main()
{
	int age, income;
	
	printf("enter your age: ");
	scanf("%d", & age);
	
	printf("enter your annual income:");
	scanf("%d", & income);
	
	
	if( age >= 21 && income >= 21000 ){
		printf("Congratulations you qualify for a loan");
	}
	 
	 else
	 {
		 printf("Unfortunately, we are unable to offer you a loan at this time");
	 }
	
	return 0;
}