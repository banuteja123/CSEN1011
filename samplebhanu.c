#include <stdio.h>
int main ()
{  
  float num,divisor,remainder;

  printf("Enter the number : ");
  scanf("%f",&num);

  printf("Enter the Divison : ");
  scanf("%f",&divisor);

  while(num>=divisor)
  {
    num  = num-divisor;
     }
        remainder =  num;
        printf("The Remainder is = %f", remainder);
      
}