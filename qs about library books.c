
#include <stdio.h>


  int main()
  {
	  float compoundInterest ,   rate , principalAmount;
	  int  time , n;
	  
	  printf("Enter the principal Amount: ");
	  scanf("%lf \n",& principalAmount);
	  
	  printf("Enter the rate of interest: ");
	  scanf("%lf \n", & rate);
	  
	  printf("Enter the time in yrs : ");
	  scanf("%d \n", &time );
	  
	 // convert  rate to decimal
	 
	 rate = 100;

	  
	  //calculating the compound Interest
	  
	  compoundInterest =  principalAmount * pow( 1 + rate , time ) - principalAmount;
	  printf("Compound Interest = %.2lf \n " , compoundInterest);	  
	  
	  return 0;
  }