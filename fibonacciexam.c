/* algorithm
Step 1- Start
Step 2- enter how many numbers required
Step 3-put n1=0, n2=1
Step 4-Print First two terms of series
Step 5-use for loop n3=n1+n2;n1=n2;n2=n3;
step 6-stop*/

#include <stdio.h>
int main () {
    int n,i,f,s,p;
    printf("the number of terms:");
    scanf ("%d",&n);
    f=0;
    s=1;
   printf("%d",f);
    printf("%d",s);    
    for  (i=4;i<n;i++)
    {
     p=f+s ;
     printf("%d",p);
     f=s;
     s=p;
    }
 return 0;
 
}


