#include<stdio.h>
#include<math.h>
int main()
{
    double pie=3.14159;
    double radius,area;
    scanf("%lf",&radius);
    area=pie*pow(radius,2);
    printf("A=%.4lf\n",area);
}