#include <stdio.h>

int main() {
    int goals_inter, goals_gremio;
    int choice;
    
    int total_grenais = 0;
    int inter_wins = 0;
    int gremio_wins = 0;
    int draws = 0;

    
    while (1) {
        
        scanf("%d %d", &goals_inter, &goals_gremio);
        total_grenais++;

        
        if (goals_inter > goals_gremio) {
            inter_wins++;
        } else if (goals_gremio > goals_inter) {
            gremio_wins++;
        } else {
            draws++;
        }

        
        printf("Novo grenal (1-sim 2-nao)\n");
        
        while (1) {
            scanf("%d", &choice);
            if (choice == 1 || choice == 2) {
                break;
            }
        }

       
        if (choice == 2) {
            break;
        }
    }

   
    printf("%d grenais\n", total_grenais);
    printf("Inter:%d\n", inter_wins);
    printf("Gremio:%d\n", gremio_wins);
    printf("Empates:%d\n", draws);

    
    if (inter_wins > gremio_wins) {
        printf("Inter venceu mais\n");
    } else if (gremio_wins > inter_wins) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Não houve vencedor\n");
    }

    
}