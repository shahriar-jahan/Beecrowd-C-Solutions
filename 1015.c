#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    double calc=pow((x2-x1),2)+pow((y2-y1),2);
    double root=sqrt(calc);
    printf("%.4lf\n",root);
}