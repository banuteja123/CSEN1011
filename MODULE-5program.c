#include <stdio.h>
int main(void)    {
struct student {
  char pin [15];
  char name[10];
  int marks;
  int rank;
}stu;
printf("Enter student PIN:");
scanf("%s" ,stu.pin);

printf("Enter student NAME:");
scanf("%s" ,stu.name);

printf("Enter student MARKS:");
scanf("%d" ,&stu.marks);

printf("Enter student RANK:");
scanf("%d" ,&stu.rank);

printf("the details entered are:\n ");
printf("%s\n", stu.pin);
printf("%s\n", stu.name);
printf("%d\n", stu.marks);
printf("%d\n", stu.rank);
return 0;
}