#include<stdio.h>
void main()
{
    int marks;
    scanf("%d",&marks);
    (marks<=100 && marks>=80)? printf("A+"):
    (marks<80 && marks>=75)? printf("A"):
    (marks<75 && marks>=70)? printf("A-"):
    (marks<70 && marks>=65)? printf("B+"):
    (marks<65 && marks>=60)? printf("B"):
    (marks<60 && marks>=55)? printf("B-"):
    (marks<55 && marks>=50)? printf("C+"):
    (marks<50 && marks>=45)? printf("C"):
    (marks<45 && marks>=40)? printf("C-"): printf("Failed");

}
