#include<stdio.h>
int main()
{
    double salary,tax=0.00;
    scanf("%lf",&salary);
    if (salary<=2000.00)
    {
        printf("Isento\n");
        return 0;
    }
    else
    {
        //2000 to 3000
        if (salary<=3000.00)
        {
            tax=(salary-2000.00)*0.08;
        }
        else if (salary<=4500.00)
        {
            //3000 to 4500
            tax=(1000.00*0.08)+(salary-3000.00)*0.18;
        }
        else
        {
            //more than 45000
            tax=(1000.00*0.08)+(1500.00*0.18)+(salary-4500.00)*0.28;
        }
        
        
        
    }
    printf("R$ %.2lf\n",tax);
}