# include <stdio.h>
int main()  {
		int p,t,r;
		
		printf("principle = ");
		scanf("%d",&p);
		
		printf("rate of interest  = " );
		scanf("%d",&r);
		
		printf("time period = ");
		scanf("%d",&t);
		
		printf("simple interest = %d \n",(p*t*r /100) );
		printf("compound interest=%d",(p*(1+r/100)*t));
		}