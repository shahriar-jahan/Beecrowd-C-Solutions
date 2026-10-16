#include<stdio.h>
int main()
{
    int num;
    double hour,p_h_s,salary;
    scanf("%d",&num);
    scanf(" %lf %lf",&hour,&p_h_s);
    salary=hour*p_h_s;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2lf\n",salary);
}