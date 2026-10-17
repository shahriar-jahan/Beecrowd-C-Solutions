#include<stdio.h>
int main()
{
    double amount;
    int total_cents;
    scanf("%lf",&amount);
    total_cents=(amount*100)+0.5;//0.5 for rounding figure
    int note100=total_cents/10000;
    total_cents=total_cents%10000;
    int note50=total_cents/5000;
    total_cents=total_cents%5000;
    int note20=total_cents/2000;
    total_cents=total_cents%2000;
    int note10=total_cents/1000;
    total_cents=total_cents%1000;
    int note5=total_cents/500;
    total_cents=total_cents%500;
    int note2=total_cents/200;
    total_cents=total_cents%200;
    int cent100=total_cents/100;
    total_cents=total_cents%100;
    int cent50=total_cents/50;
    total_cents=total_cents%50;
    int cent25=total_cents/25;
    total_cents=total_cents%25;
    int cent10=total_cents/10;
    total_cents=total_cents%10;
    int cent5=total_cents/5;
    total_cents=total_cents%5;
    int cent1=total_cents/1;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",note100);
    printf("%d nota(s) de R$ 50.00\n",note50);
    printf("%d nota(s) de R$ 20.00\n",note20);
    printf("%d nota(s) de R$ 10.00\n",note10);
    printf("%d nota(s) de R$ 5.00\n",note5);
    printf("%d nota(s) de R$ 2.00\n",note2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",cent100);
    printf("%d moeda(s) de R$ 0.50\n",cent50);
    printf("%d moeda(s) de R$ 0.25\n",cent25);
    printf("%d moeda(s) de R$ 0.10\n",cent10);
    printf("%d moeda(s) de R$ 0.05\n",cent5);
    printf("%d moeda(s) de R$ 0.01\n",cent1);

}