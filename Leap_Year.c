#include<stdio.h>
void main()
{
  int year;
  printf("Enter any year : ");
  scanf("%d", &year);
  (year % 400 ==0) || (year % 4 == 0 && year  % 100 !=0)?
  printf("Leap Year") : printf("Not Leap Year")  ;
}


