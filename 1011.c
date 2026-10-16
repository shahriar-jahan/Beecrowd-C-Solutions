#include<stdio.h>
#include<math.h>
int main()
{
    const double pi=3.14159;
    double r;
    double formula;
    scanf("%lf",&r);
    formula=(4.0/3)*pi*pow(r,3);
    printf("VOLUME = %.3lf\n",formula);
    
}