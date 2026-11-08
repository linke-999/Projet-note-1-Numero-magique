#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int entre_1_et_100 = rand() % 100 + 1;
    int nombre_user = 999;
    

    while (entre_1_et_100 != nombre_user) {
        printf("Choisissez un nombre entre 1 et 100 : \n");
        
        //scanf("%d", &nombre_user);
        
        if (scanf(" %d", &nombre_user) == 1) {
            if (nombre_user < 1 || nombre_user > 100){
                printf("le nombre doit etre dans la range de 1 a 100\n");
                continue;
            }

            else if (nombre_user < entre_1_et_100){
                printf("c'est plus que : %d \n", nombre_user);
            }

            else if (nombre_user > entre_1_et_100){
                printf("C'est moins que : %d \n", nombre_user);
            }

            else {
                printf("Tu a gagné, le nombre été : %d \n", entre_1_et_100);
            }
        }
        else {
            printf("Ce n'est pas un nombre.\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        }
    }
    exit(0);
}