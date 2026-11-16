#include<stdio.h>
void main()
{
     int amount, tkn1000, tkn500, tkn200, tkn100, tkn50, tkn20, tkn10, tkn5, tkn2,  tkn1;
    printf("Enter any amount : ");
    scanf("%d", &amount);
    tkn1000 = amount / 1000;
    amount = amount %1000;

    tkn500 = amount / 500;
    amount = amount %500;

    tkn200 = amount / 200;
    amount = amount %200;

    tkn100 = amount / 100;
    amount = amount %100;

    tkn50 = amount / 50;
    amount = amount %50;

    tkn20 = amount / 20;
    amount = amount %20;

    tkn10 = amount / 10;
    amount = amount %10;

    tkn5 = amount / 5;
    amount = amount %5;

    tkn2 = amount / 2;
    amount = amount %2;

    tkn1 = amount;

    printf("The number of 1 thousand taka's note=%d\n", tkn1000 );
    printf("The number of 5 Hundreds taka's note=%d\n", tkn500 );
    printf("The number of 2 Hundreds taka's note=%d\n", tkn200 );
    printf("The number of 1 Hundreds taka's note=%d\n", tkn100 );
    printf("The number of 50  taka's note=%d\n", tkn50 );
    printf("The number of 20  taka's note=%d\n", tkn20 );
    printf("The number of 10  taka's note=%d\n", tkn10 );
    printf("The number of 5  taka's note=%d\n", tkn5 );
    printf("The number of 2  taka's note=%d\n",  tkn2 );
    printf("The number of 1  taka's note=%d\n",  tkn1 );
}
