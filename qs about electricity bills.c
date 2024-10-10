
#include <stdio.h>

int main()
{
	
	int customerid , unitsconsumed;
	float chargesperunit , totalamount , surcharge , totalbill;
	char customername
	;
	
	// the user enters his/her details
	
	printf("Enter customer id : ");
	scanf("%d",&customerid );
	
	printf("Enter your customer name:\n");
	scanf("%c",&customername);
	
	printf("Units consumed:");
	scanf("%d",&unitsconsumed);
	
	
	if(unitsconsumed<=199)
		
	{
		chargesperunit = 1.20;
	}
	else if(unitsconsumed<400)
	{
		chargesperunit = 1.50;
	}
	else if(unitsconsumed<600)
	{
		chargesperunit = 1.80;
	}
	
	else(chargesperunit = 2.00);
	
	
	//total bill

totalbill = unitsconsumed* chargesperunit;


// calculatesurcharge


 if(totalbill>400)
 {
 	surcharge = totalbill*0.15;
 }
 else{
	 surcharge = 0;
 }
 
 
 //calculate totalamount
 
 totalamount = totalbill + surcharge;
 
 
 // the min bill to be paid is 100
 
if(totalamount<100)
{
	totalamount = 100;
}



//print output

printf("\n customer id: %d\n", customerid);
printf("customer name:%c\n", customername);
printf("units consumed:%d\n",unitsconsumed);
printf("total amount:%.2f\n",totalamount);

	
	
	
	
	
	
	
	
	
	return 0;
}