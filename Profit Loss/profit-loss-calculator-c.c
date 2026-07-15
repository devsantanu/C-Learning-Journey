#include <stdio.h>
int main()
{
	 float cost, sell, net_profit;
	
	 printf("Input a product cost value and sell value: ");
	
	 if(scanf("%f %f",&cost,&sell) != 2)
  {
	    	printf("Invalid input, please enter a valid num\n");
     	return 1;
	 }
	
	 net_profit = sell - cost;
	
	 printf("net_profit = %.1f\n",net_profit);
	
	if(net_profit > 0)
 {
	   	printf("Profit");
	}
	else
 {
		   printf("Loss");
 }
	
	    return 0;
}


