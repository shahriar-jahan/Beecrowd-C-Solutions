#include<stdio.h>
int main()
{
    double x,y,z,area,perimeter;
    scanf("%lf %lf %lf",&x,&y,&z);
    if ((x+y)>z &&(y+z)>x && (z+x)>y)
    {
        perimeter=x+y+z;
        printf("Perimetro = %.1lf\n",perimeter);
    }
    else
    {
        area=((x+y)*z)/2;
        printf("Area = %.1lf\n",area);
    }
    
}