#include <stdio.h>
//tricky
int main() {
    double salary, new_salary, adjustment;
    int percent;

   
    scanf("%lf", &salary);

    
    if (salary >= 0 && salary <= 400.00) {
        percent = 15;
        adjustment = salary * 0.15;
    }
    else if (salary > 400.00 && salary <= 800.00) {
        percent = 12;
        adjustment = salary * 0.12;
    }
    else if (salary > 800.00 && salary <= 1200.00) {
        percent = 10;
        adjustment = salary * 0.10;
    }
    else if (salary > 1200.00 && salary <= 2000.00) {
        percent = 7;
        adjustment = salary * 0.07;
    }
    else {
        percent = 4;
        adjustment = salary * 0.04;
    }

    
    new_salary = salary + adjustment;

    
    printf("Novo salario: %.2lf\n", new_salary);
    printf("Reajuste ganho: %.2lf\n", adjustment);
    printf("Em percentual: %d %%\n", percent); 
    return 0;
}