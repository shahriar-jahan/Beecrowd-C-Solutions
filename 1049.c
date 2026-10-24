#include<stdio.h>
#include<string.h>
int main()
{
    char word1[50],word2[50],word3[50];
    scanf("%s %s %s",word1,word2,word3);
    if (strcmp(word1,"vertebrado")==0)
    {
        if (strcmp(word2,"ave")==0)
        {
            if (strcmp(word3,"carnivoro")==0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
            
            
        }
       if (strcmp(word2,"mamifero")==0)
        {
            if (strcmp(word3,"onivoro")==0)
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
            
            
        } 
    }

    ///step 2
    else if (strcmp(word1,"invertebrado")==0)
    {
        if (strcmp(word2,"inseto")==0)
        {
            if (strcmp(word3,"hematofago")==0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
            
            
        }
       if (strcmp(word2,"anelideo")==0)
        {
            if (strcmp(word3,"hematofago")==0)
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
            
            
        } 
    }
    
    

}