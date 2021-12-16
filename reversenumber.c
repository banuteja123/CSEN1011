#include <stdio.h>
int main()   {
  int num,X,Y=0;
  printf ("enter a number :");
  scanf("%d",&num);
while(num>0)
{
  X=num%10;
  Y=Y*10+X;
  num=num/10;
}
printf("the reverse of a number=%d",Y);
}