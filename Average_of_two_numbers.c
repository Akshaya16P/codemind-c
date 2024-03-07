#include<stdio.h>
int main()
{
    int Num1,Num2;
    float Average;
    scanf("%d%d",&Num1,&Num2);
    Average=(Num1+Num2)/2.0;
    printf("Average of %d and %d is: %.2f",Num1,Num2,Average);
}