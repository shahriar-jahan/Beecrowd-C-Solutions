#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    double fixed_salary;
    double sales;
    double calculation;
    double sum;
    double total_salary;
    scanf("%s",name);
    scanf("%lf %lf",&fixed_salary,&sales);
    calculation=sales*0.15;
    sum=calculation+fixed_salary;
    printf("TOTAL = R$ %.2lf\n",sum);
}