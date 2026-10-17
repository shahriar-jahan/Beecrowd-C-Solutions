#include<stdio.h>
int main()
{
    int code,amount;
    float price,total;
    scanf("%d %d",&code,&amount);
    switch (code)
    {
    case 1:
        price=4.00;
        total=price*amount;
        printf("Total: R$ %.2f\n",total);
        break;
        case 2:
        price=4.50;
        total=price*amount;
        printf("Total: R$ %.2f\n",total);
        break;
    case 3:
        price=5.00;
        total=price*amount;
        printf("Total: R$ %.2f\n",total);
        break;
        case 4:
        price=2.00;
        total=price*amount;
        printf("Total: R$ %.2f\n",total);
        break;
        case 5:
        price=1.50;
        total=price*amount;
        printf("Total: R$ %.2f\n",total);
        break;
    default:
    printf("Invalid");
        break;
    }
}