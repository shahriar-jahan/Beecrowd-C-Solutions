#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    double a,b,c,d,e;
    a=(1.0/2)*A*C;
    const double pie=3.14159;
    b=pie*pow(C,2);
    c=(1.0/2)*(A+B)*C;
    d=pow(B,2);
    e=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",a,b,c,d,e);

}