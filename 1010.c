#include<stdio.h>
int main()
{
    int product_code_1,product_code_2,unit1,unit2;
    float price1,price2;
    scanf("%d %d %f",&product_code_1,&unit1,&price1);
    scanf("%d %d %f",&product_code_2,&unit2,&price2);
    float calc1;
    float calc2;
    float total;
    calc1=unit1*price1;
    calc2=unit2*price2;
    total=calc1+calc2;
    printf("VALOR A PAGAR: R$ %.2f\n",total);

}
