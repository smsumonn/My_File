#include<stdio.h>
void main()
{
    int id, batch, department, roll, year, semester ;
    printf("Enter eight digits id : ");
    scanf("%d" , &id );
    year = id / 1000000;
    semester = (id / 100000) %10;
    department = (id / 1000) % 100;
    roll = id % 1000;






    printf(" Year = %d\n Semester = %d\n Department = %d\n Roll = %d", year, semester, department, roll);

}
