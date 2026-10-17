#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,result,final,extra_n;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    result=((n1*2)+(n2*3)+(n3*4)+(n4*1))/10.0;
    printf("Media: %.1lf\n",result);
    if (result>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (result<5)
    {
        printf("Aluno reprovado.\n");
    }
    else if (result>=5.0 && result<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&extra_n);
        printf("Nota do exame: %.1lf\n",extra_n);
        final=(extra_n+result)/2;
        if (final>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",final);
        

    }

}