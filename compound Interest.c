#include <stdio.h>

int main(){
	
	int principal, time;
	float rate , simpleInterest;
	
	printf("Enter the principal amount");
	scanf("%d", &principal);
	
	printf("Enter the time in yrs");
	scanf("%d",&time);
	
	printf("Enter the rate ");
	scanf("%f",&rate);
	
	simpleInterest = (principal * time *rate)/100;
	printf("the simple Interest is %.2f \n",simpleInterest);
	
	
	return 0;
}