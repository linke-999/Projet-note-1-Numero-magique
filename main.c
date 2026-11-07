#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int entre_1_et_100 = rand() % 100 + 1;
    int nombre_user = 999;
    

    while (entre_1_et_100 != nombre_user) {

        printf("Choisissez un nombre entre 1 et 100 : \n"); //affiche 
        
        scanf("%d", &nombre_user);
    
        if (nombre_user < entre_1_et_100){
            printf("c'est plus que : %d \n", nombre_user);
        }
        else if (nombre_user > entre_1_et_100){
            printf("C'est moins que : %d \n", nombre_user);
        }
        else {
        printf("Tu a gagné, le nombre été : %d \n", entre_1_et_100);
        }
    }
    exit(0);
}