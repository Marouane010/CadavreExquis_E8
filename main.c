#include <stdio.h>
#include <stdlib.h>

int main(){
    int choix1,choix2;
    printf("Cadavre exquis :\n");
    printf("1: Lancer \n");
    printf("2: Quitter \n");
    scanf("choix: %d", &choix1);
    while(choix1 < 1 || choix1 > 2){
        scanf("Merci de saisir une valeur valide : %d", &choix1);
    }
    if(choix1==1){
        printf("CADAVRE EXQUIS\n");
        printf("1: Generer une phrase du type (nom – adjectif – verbe – nom)\n");
        printf("2: Generer une phrase du type (nom – ‘qui’ – verbe – verbe – nom – adjectif )\n");
        printf("3: Generer une phrase du type (nom – verbe)\n");
        scanf("choix: ",&choix2);
        while(choix2 < 1 || choix2 > 3){
            scanf("Merci de saisir une valeur valide : %d", &choix2);
        }
        if(choix2==1){
            //phrase modèle 1
        }

        if(choix2==2){
            //phrase modèle 2
        }

        if(choix2==3){
            //phrase modèle 3
        }
    }
    if(choix1==2){
        printf("EXIT\n");
        return 0;
    }
    return 0;
}
