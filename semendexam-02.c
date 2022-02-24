#include<stdio.h>
int main()    
{
   int b1,b2,b3,b4,SUM;
  scanf("%d%d%d%d",&b1,&b2,&b3,&b4);
  SUM=b1+b2+b3+b4;
  if(SUM%2==0)
  {
    printf("Same colour");
  }
  else{
    printf("Different colour");
  }

return 0;
  }